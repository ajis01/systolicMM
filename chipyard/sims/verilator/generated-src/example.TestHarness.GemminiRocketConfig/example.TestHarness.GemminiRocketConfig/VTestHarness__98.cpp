// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7627(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7627\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_544 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_541) 
	   | (0x7eU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_541) 
		       << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_0_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_0_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_719 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_47 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_d_ready) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_55)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_d_ready) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_47 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_634 
	= (0x1ffU & (((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_561)
			   ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
			       ? (~ (0xffffffU & (((IData)(0xfffU) 
						   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
						  >> 3U)))
			       : 0U) : 0U) | (7U & 
					      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_562)
					        ? (
						   vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
						   [0U]
						    ? 
						   (~ 
						    (0x3ffffU 
						     & (((IData)(0x3fU) 
							 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_bits_size)) 
							>> 3U)))
						    : 0U)
					        : 0U))) 
			| (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_563)
				  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
				      ? (~ (0x3ffffU 
					    & (((IData)(0x3fU) 
						<< (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_bits_size)) 
					       >> 3U)))
				      : 0U) : 0U))) 
		       | (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_564)
				 ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
				     ? (~ (0x3ffffU 
					   & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
					      >> 3U)))
				     : 0U) : 0U))) 
		      | (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_565)
			        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
				    ? (~ (0x3ffffU 
					  & (((IData)(0x3fU) 
					      << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					     >> 3U)))
				    : 0U) : 0U))) | 
		     (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_566)
			     ? ((1U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
				 [0U]) ? (~ (0x3ffffU 
					     & (((IData)(0x3fU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_bits_size)) 
						>> 3U)))
				 : 0U) : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7628(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7628\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_570 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_561) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_562));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_47 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_47 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_47 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_547 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_544) 
	   | (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_544) 
		       << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_774 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_730)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_804))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_771 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_727)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_801))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7629(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7629\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3163,1023,0,32);
    VL_SIGW(__Vtemp3164,1023,0,32);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_771 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_719) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_727)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_719) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_801))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_765 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? (VL_ULL(1) << (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
						[0U] 
						>> 4U)))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_6) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_759 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_715)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_605 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_552 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513)));
    __Vtemp3163[0U] = 1U;
    __Vtemp3163[1U] = 0U;
    __Vtemp3163[2U] = 0U;
    __Vtemp3163[3U] = 0U;
    __Vtemp3163[4U] = 0U;
    __Vtemp3163[5U] = 0U;
    __Vtemp3163[6U] = 0U;
    __Vtemp3163[7U] = 0U;
    __Vtemp3163[8U] = 0U;
    __Vtemp3163[9U] = 0U;
    __Vtemp3163[0xaU] = 0U;
    __Vtemp3163[0xbU] = 0U;
    __Vtemp3163[0xcU] = 0U;
    __Vtemp3163[0xdU] = 0U;
    __Vtemp3163[0xeU] = 0U;
    __Vtemp3163[0xfU] = 0U;
    __Vtemp3163[0x10U] = 0U;
    __Vtemp3163[0x11U] = 0U;
    __Vtemp3163[0x12U] = 0U;
    __Vtemp3163[0x13U] = 0U;
    __Vtemp3163[0x14U] = 0U;
    __Vtemp3163[0x15U] = 0U;
    __Vtemp3163[0x16U] = 0U;
    __Vtemp3163[0x17U] = 0U;
    __Vtemp3163[0x18U] = 0U;
    __Vtemp3163[0x19U] = 0U;
    __Vtemp3163[0x1aU] = 0U;
    __Vtemp3163[0x1bU] = 0U;
    __Vtemp3163[0x1cU] = 0U;
    __Vtemp3163[0x1dU] = 0U;
    __Vtemp3163[0x1eU] = 0U;
    __Vtemp3163[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3164, __Vtemp3163, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[5U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[6U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[7U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[8U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[8U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[9U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[9U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xaU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xbU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xcU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xdU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xeU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xfU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x10U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x11U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x12U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x13U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x14U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x15U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x16U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x17U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x18U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x19U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1aU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1bU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1cU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1dU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1eU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x1fU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
	    ? __Vtemp3164[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_a_valid)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_97)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7630(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7630\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_658 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_374 
	= ((0U == (0x46010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_571 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_570) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_563));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795)))
	    ? (VL_ULL(1) << (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
				      [0U] >> 6U)))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_6) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1026 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_721)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
	   & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_721)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7631(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7631\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3168,1023,0,32);
    VL_SIGW(__Vtemp3169,1023,0,32);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
	   & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_849 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_775 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_846 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_772 
				    | vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_846 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_772 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_840 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_611 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_567)));
    __Vtemp3168[0U] = 1U;
    __Vtemp3168[1U] = 0U;
    __Vtemp3168[2U] = 0U;
    __Vtemp3168[3U] = 0U;
    __Vtemp3168[4U] = 0U;
    __Vtemp3168[5U] = 0U;
    __Vtemp3168[6U] = 0U;
    __Vtemp3168[7U] = 0U;
    __Vtemp3168[8U] = 0U;
    __Vtemp3168[9U] = 0U;
    __Vtemp3168[0xaU] = 0U;
    __Vtemp3168[0xbU] = 0U;
    __Vtemp3168[0xcU] = 0U;
    __Vtemp3168[0xdU] = 0U;
    __Vtemp3168[0xeU] = 0U;
    __Vtemp3168[0xfU] = 0U;
    __Vtemp3168[0x10U] = 0U;
    __Vtemp3168[0x11U] = 0U;
    __Vtemp3168[0x12U] = 0U;
    __Vtemp3168[0x13U] = 0U;
    __Vtemp3168[0x14U] = 0U;
    __Vtemp3168[0x15U] = 0U;
    __Vtemp3168[0x16U] = 0U;
    __Vtemp3168[0x17U] = 0U;
    __Vtemp3168[0x18U] = 0U;
    __Vtemp3168[0x19U] = 0U;
    __Vtemp3168[0x1aU] = 0U;
    __Vtemp3168[0x1bU] = 0U;
    __Vtemp3168[0x1cU] = 0U;
    __Vtemp3168[0x1dU] = 0U;
    __Vtemp3168[0x1eU] = 0U;
    __Vtemp3168[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3169, __Vtemp3168, 
		  vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
		  [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[5U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[6U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[7U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[8U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[8U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[9U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[9U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xaU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xbU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xcU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xdU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xeU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xfU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x10U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x11U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x12U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x13U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x14U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x15U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x16U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x17U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x18U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x19U] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1aU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1bU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1cU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1dU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1eU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x1fU] 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
	    & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	       [0U])) ? __Vtemp3169[0x1fU] : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7632(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7632\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3176,1023,0,32);
    VL_SIGW(__Vtemp3177,1023,0,32);
    VL_SIGW(__Vtemp3185,1023,0,32);
    VL_SIGW(__Vtemp3186,1023,0,32);
    // Body
    __Vtemp3176[0U] = 1U;
    __Vtemp3176[1U] = 0U;
    __Vtemp3176[2U] = 0U;
    __Vtemp3176[3U] = 0U;
    __Vtemp3176[4U] = 0U;
    __Vtemp3176[5U] = 0U;
    __Vtemp3176[6U] = 0U;
    __Vtemp3176[7U] = 0U;
    __Vtemp3176[8U] = 0U;
    __Vtemp3176[9U] = 0U;
    __Vtemp3176[0xaU] = 0U;
    __Vtemp3176[0xbU] = 0U;
    __Vtemp3176[0xcU] = 0U;
    __Vtemp3176[0xdU] = 0U;
    __Vtemp3176[0xeU] = 0U;
    __Vtemp3176[0xfU] = 0U;
    __Vtemp3176[0x10U] = 0U;
    __Vtemp3176[0x11U] = 0U;
    __Vtemp3176[0x12U] = 0U;
    __Vtemp3176[0x13U] = 0U;
    __Vtemp3176[0x14U] = 0U;
    __Vtemp3176[0x15U] = 0U;
    __Vtemp3176[0x16U] = 0U;
    __Vtemp3176[0x17U] = 0U;
    __Vtemp3176[0x18U] = 0U;
    __Vtemp3176[0x19U] = 0U;
    __Vtemp3176[0x1aU] = 0U;
    __Vtemp3176[0x1bU] = 0U;
    __Vtemp3176[0x1cU] = 0U;
    __Vtemp3176[0x1dU] = 0U;
    __Vtemp3176[0x1eU] = 0U;
    __Vtemp3176[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3177, __Vtemp3176, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[1U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[1U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[1U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[2U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[2U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[3U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[3U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[4U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[4U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[4U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[5U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[5U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[5U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[5U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[6U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[6U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[6U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[6U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[7U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[7U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[7U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[7U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[8U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[8U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[8U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[8U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[9U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[9U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[9U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[9U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xaU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xaU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xaU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xbU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xbU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xbU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xcU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xcU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xcU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xdU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xdU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xdU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xeU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xeU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xeU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0xfU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xfU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0xfU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0x10U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x10U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0x10U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0x11U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x11U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
		  ? __Vtemp3177[0x11U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0x12U] 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x12U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		      & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
			     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
			     ? __Vtemp3177[0x12U] : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_706 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_658) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_667)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_658) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_770)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_572 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_571) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_564));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_840 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_611 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_567)));
    __Vtemp3185[0U] = 1U;
    __Vtemp3185[1U] = 0U;
    __Vtemp3185[2U] = 0U;
    __Vtemp3185[3U] = 0U;
    __Vtemp3185[4U] = 0U;
    __Vtemp3185[5U] = 0U;
    __Vtemp3185[6U] = 0U;
    __Vtemp3185[7U] = 0U;
    __Vtemp3185[8U] = 0U;
    __Vtemp3185[9U] = 0U;
    __Vtemp3185[0xaU] = 0U;
    __Vtemp3185[0xbU] = 0U;
    __Vtemp3185[0xcU] = 0U;
    __Vtemp3185[0xdU] = 0U;
    __Vtemp3185[0xeU] = 0U;
    __Vtemp3185[0xfU] = 0U;
    __Vtemp3185[0x10U] = 0U;
    __Vtemp3185[0x11U] = 0U;
    __Vtemp3185[0x12U] = 0U;
    __Vtemp3185[0x13U] = 0U;
    __Vtemp3185[0x14U] = 0U;
    __Vtemp3185[0x15U] = 0U;
    __Vtemp3185[0x16U] = 0U;
    __Vtemp3185[0x17U] = 0U;
    __Vtemp3185[0x18U] = 0U;
    __Vtemp3185[0x19U] = 0U;
    __Vtemp3185[0x1aU] = 0U;
    __Vtemp3185[0x1bU] = 0U;
    __Vtemp3185[0x1cU] = 0U;
    __Vtemp3185[0x1dU] = 0U;
    __Vtemp3185[0x1eU] = 0U;
    __Vtemp3185[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3186, __Vtemp3185, 
		  (0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
			     [0U] >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[5U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[6U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[7U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[8U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[8U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[9U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[9U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xaU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xbU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xcU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xdU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xeU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xfU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x10U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x11U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x12U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x13U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x14U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x15U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x16U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x17U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x18U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x19U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1aU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1bU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1cU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1dU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1eU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x1fU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
	    ? __Vtemp3186[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1027 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1026) 
	   & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
	   [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1193 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1026) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
	      [0U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7633(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7633\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3190,255,0,8);
    VL_SIGW(__Vtemp3191,255,0,8);
    VL_SIGW(__Vtemp3192,255,0,8);
    VL_SIGW(__Vtemp3193,255,0,8);
    VL_SIGW(__Vtemp3194,255,0,8);
    VL_SIGW(__Vtemp3195,255,0,8);
    VL_SIGW(__Vtemp3196,255,0,8);
    VL_SIGW(__Vtemp3197,255,0,8);
    VL_SIGW(__Vtemp3198,255,0,8);
    VL_SIGW(__Vtemp3199,255,0,8);
    VL_SIGW(__Vtemp3200,255,0,8);
    VL_SIGW(__Vtemp3201,255,0,8);
    // Body
    __Vtemp3190[0U] = 1U;
    __Vtemp3190[1U] = 0U;
    __Vtemp3190[2U] = 0U;
    __Vtemp3190[3U] = 0U;
    __Vtemp3190[4U] = 0U;
    __Vtemp3190[5U] = 0U;
    __Vtemp3190[6U] = 0U;
    __Vtemp3190[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3191, __Vtemp3190, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3191[3U] >> 0xeU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3192[0U] = 1U;
    __Vtemp3192[1U] = 0U;
    __Vtemp3192[2U] = 0U;
    __Vtemp3192[3U] = 0U;
    __Vtemp3192[4U] = 0U;
    __Vtemp3192[5U] = 0U;
    __Vtemp3192[6U] = 0U;
    __Vtemp3192[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3193, __Vtemp3192, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3193[3U] >> 0xaU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3194[0U] = 1U;
    __Vtemp3194[1U] = 0U;
    __Vtemp3194[2U] = 0U;
    __Vtemp3194[3U] = 0U;
    __Vtemp3194[4U] = 0U;
    __Vtemp3194[5U] = 0U;
    __Vtemp3194[6U] = 0U;
    __Vtemp3194[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3195, __Vtemp3194, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3195[3U] >> 0xdU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3196[0U] = 1U;
    __Vtemp3196[1U] = 0U;
    __Vtemp3196[2U] = 0U;
    __Vtemp3196[3U] = 0U;
    __Vtemp3196[4U] = 0U;
    __Vtemp3196[5U] = 0U;
    __Vtemp3196[6U] = 0U;
    __Vtemp3196[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3197, __Vtemp3196, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3197[3U] >> 9U)) & (0U == (0x80U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						    >> 3U))));
    __Vtemp3198[0U] = 1U;
    __Vtemp3198[1U] = 0U;
    __Vtemp3198[2U] = 0U;
    __Vtemp3198[3U] = 0U;
    __Vtemp3198[4U] = 0U;
    __Vtemp3198[5U] = 0U;
    __Vtemp3198[6U] = 0U;
    __Vtemp3198[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3199, __Vtemp3198, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3199[3U] >> 0xcU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3200[0U] = 1U;
    __Vtemp3200[1U] = 0U;
    __Vtemp3200[2U] = 0U;
    __Vtemp3200[3U] = 0U;
    __Vtemp3200[4U] = 0U;
    __Vtemp3200[5U] = 0U;
    __Vtemp3200[6U] = 0U;
    __Vtemp3200[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3201, __Vtemp3200, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3201[3U] >> 0x10U)) & (0U == 
					     (0x80U 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						 >> 3U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7634(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7634\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3202,255,0,8);
    VL_SIGW(__Vtemp3203,255,0,8);
    VL_SIGW(__Vtemp3204,255,0,8);
    VL_SIGW(__Vtemp3205,255,0,8);
    VL_SIGW(__Vtemp3206,255,0,8);
    VL_SIGW(__Vtemp3207,255,0,8);
    VL_SIGW(__Vtemp3208,255,0,8);
    VL_SIGW(__Vtemp3209,255,0,8);
    VL_SIGW(__Vtemp3210,255,0,8);
    VL_SIGW(__Vtemp3211,255,0,8);
    // Body
    __Vtemp3202[0U] = 1U;
    __Vtemp3202[1U] = 0U;
    __Vtemp3202[2U] = 0U;
    __Vtemp3202[3U] = 0U;
    __Vtemp3202[4U] = 0U;
    __Vtemp3202[5U] = 0U;
    __Vtemp3202[6U] = 0U;
    __Vtemp3202[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3203, __Vtemp3202, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3203[3U] >> 8U)) & (0U == (0x80U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						    >> 3U))));
    __Vtemp3204[0U] = 1U;
    __Vtemp3204[1U] = 0U;
    __Vtemp3204[2U] = 0U;
    __Vtemp3204[3U] = 0U;
    __Vtemp3204[4U] = 0U;
    __Vtemp3204[5U] = 0U;
    __Vtemp3204[6U] = 0U;
    __Vtemp3204[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3205, __Vtemp3204, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3205[3U] >> 0xbU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3206[0U] = 1U;
    __Vtemp3206[1U] = 0U;
    __Vtemp3206[2U] = 0U;
    __Vtemp3206[3U] = 0U;
    __Vtemp3206[4U] = 0U;
    __Vtemp3206[5U] = 0U;
    __Vtemp3206[6U] = 0U;
    __Vtemp3206[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3207, __Vtemp3206, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3207[3U] >> 0xfU)) & (0U == (0x80U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						      >> 3U))));
    __Vtemp3208[0U] = 1U;
    __Vtemp3208[1U] = 0U;
    __Vtemp3208[2U] = 0U;
    __Vtemp3208[3U] = 0U;
    __Vtemp3208[4U] = 0U;
    __Vtemp3208[5U] = 0U;
    __Vtemp3208[6U] = 0U;
    __Vtemp3208[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3209, __Vtemp3208, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13057 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & __Vtemp3209[1U]) & (0U == (0x80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						  >> 3U))));
    __Vtemp3210[0U] = 1U;
    __Vtemp3210[1U] = 0U;
    __Vtemp3210[2U] = 0U;
    __Vtemp3210[3U] = 0U;
    __Vtemp3210[4U] = 0U;
    __Vtemp3210[5U] = 0U;
    __Vtemp3210[6U] = 0U;
    __Vtemp3210[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3211, __Vtemp3210, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13062 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
	    & (__Vtemp3211[1U] >> 1U)) & (0U == (0x80U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						    >> 3U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_repeat));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7635(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7635\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3212,1023,0,32);
    VL_SIGW(__Vtemp3213,1023,0,32);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_664 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_611 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_567)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_519)));
    __Vtemp3212[0U] = 1U;
    __Vtemp3212[1U] = 0U;
    __Vtemp3212[2U] = 0U;
    __Vtemp3212[3U] = 0U;
    __Vtemp3212[4U] = 0U;
    __Vtemp3212[5U] = 0U;
    __Vtemp3212[6U] = 0U;
    __Vtemp3212[7U] = 0U;
    __Vtemp3212[8U] = 0U;
    __Vtemp3212[9U] = 0U;
    __Vtemp3212[0xaU] = 0U;
    __Vtemp3212[0xbU] = 0U;
    __Vtemp3212[0xcU] = 0U;
    __Vtemp3212[0xdU] = 0U;
    __Vtemp3212[0xeU] = 0U;
    __Vtemp3212[0xfU] = 0U;
    __Vtemp3212[0x10U] = 0U;
    __Vtemp3212[0x11U] = 0U;
    __Vtemp3212[0x12U] = 0U;
    __Vtemp3212[0x13U] = 0U;
    __Vtemp3212[0x14U] = 0U;
    __Vtemp3212[0x15U] = 0U;
    __Vtemp3212[0x16U] = 0U;
    __Vtemp3212[0x17U] = 0U;
    __Vtemp3212[0x18U] = 0U;
    __Vtemp3212[0x19U] = 0U;
    __Vtemp3212[0x1aU] = 0U;
    __Vtemp3212[0x1bU] = 0U;
    __Vtemp3212[0x1cU] = 0U;
    __Vtemp3212[0x1dU] = 0U;
    __Vtemp3212[0x1eU] = 0U;
    __Vtemp3212[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3213, __Vtemp3212, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[8U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[8U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[9U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[9U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xaU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xbU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xcU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xdU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xeU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xfU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x10U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x11U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x12U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x13U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x14U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x15U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x16U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x17U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x18U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x19U] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1aU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1bU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1cU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1dU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1eU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x1fU] 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
	    ? __Vtemp3213[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_repeat));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_379 
	= (((((((0U == (0x46012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
		& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_5))) 
	       | ((0U == (0x44000000U & (0x4000000U 
					 ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
	      | ((0U == (0x46010000U & (0x2000000U 
					^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
	     | ((0U == (0x46012000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
	    | ((0U == (0x46012000U & (0x44000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)))) 
	   | ((0U == (0x46012000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_enq_ready)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7636(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7636\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708 
	= (7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700) 
		  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
					    >> 0xeU))) 
		     >> 1U)) & (0U == (0x7ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700) 
		  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
					    >> 0xeU))) 
		     >> 2U)) & (0x7ffU == (0x7ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[1U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[1U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[2U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[3U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[4U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[4U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[5U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[5U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[5U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[5U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[6U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[6U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[6U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[6U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[7U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[7U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[7U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[7U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[8U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[8U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[8U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[8U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[9U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[9U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[9U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[9U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xaU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xaU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xaU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xbU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xbU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xbU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xcU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xcU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xcU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xdU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xdU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xdU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xeU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xeU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xeU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0xfU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xfU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xfU]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0x10U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x10U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x10U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0x11U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x11U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x11U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0x12U] 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x12U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		      & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x12U])));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_827 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_760 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707) 
					  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_789)))
					  ? (VL_ULL(1) 
					     << (0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 4U)))
					  : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_573 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_572) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_565));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[1U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[1U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[2U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[3U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[4U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[4U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[5U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[5U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[5U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[6U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[6U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[6U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[7U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[7U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[7U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[8U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[8U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[8U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[9U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[9U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[9U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xaU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xaU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xaU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xbU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xbU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xbU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xcU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xcU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xcU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xdU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xdU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xdU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xeU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xeU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xeU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0xfU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xfU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xfU]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0x10U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x10U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x10U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0x11U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x11U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x11U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0x12U] 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x12U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		      & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x12U])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7637(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7637\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_1 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1027) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628)) 
		>> 0x14U)) & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
				     [0U]))) & (0U 
						!= (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_143 
							    >> 0x20U))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_0 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1027) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628)) 
		>> 0x10U)) & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
				     [0U]))) & (0U 
						!= (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_143 
							    >> 0x20U))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1201 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1193) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628)) 
	       >> 1U)) & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
				 [0U])));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1296 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1193) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628)) 
	       >> 0x14U)) & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
				    [0U])));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1276 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1193) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628)) 
	       >> 0x10U)) & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
				    [0U])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7638(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7638\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3234,1023,0,32);
    VL_SIGW(__Vtemp3235,1023,0,32);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13057) 
	   & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13057) 
	   & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13062) 
	   & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13062) 
	   & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_712 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_673)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_776)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    __Vtemp3234[0U] = 1U;
    __Vtemp3234[1U] = 0U;
    __Vtemp3234[2U] = 0U;
    __Vtemp3234[3U] = 0U;
    __Vtemp3234[4U] = 0U;
    __Vtemp3234[5U] = 0U;
    __Vtemp3234[6U] = 0U;
    __Vtemp3234[7U] = 0U;
    __Vtemp3234[8U] = 0U;
    __Vtemp3234[9U] = 0U;
    __Vtemp3234[0xaU] = 0U;
    __Vtemp3234[0xbU] = 0U;
    __Vtemp3234[0xcU] = 0U;
    __Vtemp3234[0xdU] = 0U;
    __Vtemp3234[0xeU] = 0U;
    __Vtemp3234[0xfU] = 0U;
    __Vtemp3234[0x10U] = 0U;
    __Vtemp3234[0x11U] = 0U;
    __Vtemp3234[0x12U] = 0U;
    __Vtemp3234[0x13U] = 0U;
    __Vtemp3234[0x14U] = 0U;
    __Vtemp3234[0x15U] = 0U;
    __Vtemp3234[0x16U] = 0U;
    __Vtemp3234[0x17U] = 0U;
    __Vtemp3234[0x18U] = 0U;
    __Vtemp3234[0x19U] = 0U;
    __Vtemp3234[0x1aU] = 0U;
    __Vtemp3234[0x1bU] = 0U;
    __Vtemp3234[0x1cU] = 0U;
    __Vtemp3234[0x1dU] = 0U;
    __Vtemp3234[0x1eU] = 0U;
    __Vtemp3234[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3235, __Vtemp3234, 
		  (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[1U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[1U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[1U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[2U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[2U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[3U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[3U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[4U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[4U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[4U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[5U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[5U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[5U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[6U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[6U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[6U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[7U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[7U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[7U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[8U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[8U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[8U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[8U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[9U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[9U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[9U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[9U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xaU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xaU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xaU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xbU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xbU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xbU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xcU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xcU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xcU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xdU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xdU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xdU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xeU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xeU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xeU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xfU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xfU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0xfU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x10U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x10U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0x10U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x11U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x11U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3235[0x11U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x12U] 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x12U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		      & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
			     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
			     ? __Vtemp3235[0x12U] : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_712 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_673)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7639(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7639\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_776)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_379) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_374)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_379) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_374));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_151 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_174 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 8U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_199 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_224 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_249 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x20U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_274 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x28U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_299 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x30U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_324 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x38U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7640(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7640\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_349 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_372 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 8U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_397 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_422 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_447 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x20U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_472 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x28U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_497 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x30U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_522 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x38U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_574 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_573) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_566));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claiming 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_0)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__maxDevs_0)
	     : 0U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_1)
		       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__maxDevs_1)
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_1) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7641(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7641\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_1 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1296) 
		    & (0xffffffffU == (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_143 
					       >> 0x20U)))) 
		   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__enables_1_0) 
		       << 1U) >> (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_data
						[0U] 
						>> 0x20U))))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_0 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_1276) 
		    & (0xffffffffU == (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_143 
					       >> 0x20U)))) 
		   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__enables_0_0) 
		       << 1U) >> (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_data
						[0U] 
						>> 0x20U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
					  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_795)))
					  ? (VL_ULL(1) 
					     << (0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						    >> 6U)))
					  : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
					  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_795)))
					  ? (VL_ULL(1) 
					     << (0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						    >> 6U)))
					  : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_995)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7642(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7642\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_31 
	= (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_324)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							  >> 0x38U))
					       : (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							  >> 0x38U))) 
					     << 0x18U)) 
			     | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_299)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							   >> 0x30U))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							   >> 0x30U))) 
					      << 0x10U)) 
				| ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_274)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							    >> 0x28U))
						 : (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							    >> 0x28U))) 
					       << 8U)) 
				   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_249)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							   >> 0x20U))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							   >> 0x20U))))))))) 
	    << 0x20U) | (QData)((IData)(((0xff000000U 
					  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_224)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							  >> 0x18U))
					       : (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							  >> 0x18U))) 
					     << 0x18U)) 
					 | ((0xff0000U 
					     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_199)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							     >> 0x10U))
						  : (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
							     >> 0x10U))) 
						<< 0x10U)) 
					    | ((0xff00U 
						& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_174)
						     ? (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
								>> 8U))
						     : (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0 
								>> 8U))) 
						   << 8U)) 
					       | (0xffU 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_151)
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data)
						      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__timecmp_0)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7643(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7643\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_58 
	= (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_522)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							  >> 0x38U))
					       : (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							  >> 0x38U))) 
					     << 0x18U)) 
			     | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_497)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							   >> 0x30U))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							   >> 0x30U))) 
					      << 0x10U)) 
				| ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_472)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							    >> 0x28U))
						 : (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							    >> 0x28U))) 
					       << 8U)) 
				   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_447)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							   >> 0x20U))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							   >> 0x20U))))))))) 
	    << 0x20U) | (QData)((IData)(((0xff000000U 
					  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_422)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							  >> 0x18U))
					       : (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							  >> 0x18U))) 
					     << 0x18U)) 
					 | ((0xff0000U 
					     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_397)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
							     >> 0x10U))
						  : (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
							     >> 0x10U))) 
						<< 0x10U)) 
					    | ((0xff00U 
						& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_372)
						     ? (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
								>> 8U))
						     : (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_ 
								>> 8U))) 
						   << 8U)) 
					       | (0xffU 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_349)
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data)
						      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__time_)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completedDevs 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_0) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_1))
		    ? ((IData)(1U) << (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_data
						     [0U] 
						     >> 0x20U))))
		    : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7644(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7644\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_38 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_1) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7645(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7645\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_4 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_) 
		 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_7 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_4)) 
	   != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_7));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d 
	= (((0x4000U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)) 
			 << 0xeU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))) 
	    | ((0x3ff0U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)
			     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
				     >> 4U)) << 4U)) 
	       | (8U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)) 
			 << 3U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))))) 
	   | ((4U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)) 
		      << 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))) 
	      | ((2U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)) 
			 << 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))) 
		 | (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7646(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7646\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7647(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7647\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7648(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7648\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3244,607,0,19);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_128 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_742 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_588 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp3244, vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_661 
	= (1U & ((~ __Vtemp3244[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_124 
	= ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_555 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_534)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
			      >> 0xaU))) | (0U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						      >> 0xaU)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
				     >> 6U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						      >> 6U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
				   >> 6U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7649(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7649\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_596 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_600 
	= (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_109 
	= ((0U == (3U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x25U)) & (~ (0x1fU 
						   & ((IData)(3U) 
						      << 
						      (3U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								  >> 0x2fU))))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_239 
	= (((2U >= (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x2fU)))) & ((
						   ((((0U 
						       == 
						       (0x1c0U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								   >> 0x25U)))) 
						      | (0U 
							 == 
							 (0x1fcU 
							  & (0x44U 
							     ^ (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									>> 0x25U)))))) 
						     | (0U 
							== 
							(0x1e8U 
							 & (0x48U 
							    ^ (IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x25U)))))) 
						    | (0U 
						       == 
						       (0x1e0U 
							& (0x60U 
							   ^ (IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								      >> 0x25U)))))) 
						   | (0U 
						      == 
						      (0x180U 
						       & (0x80U 
							  ^ (IData)(
								    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 0x25U)))))) 
						  | (0U 
						     == 
						     (0x100U 
						      & (0x100U 
							 ^ (IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x25U))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7650(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7650\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_727 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x34U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_731 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x31U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_719)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_735 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2fU))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_739 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2eU))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_721)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_743 
	= (((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			       >> 0x25U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_722)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_776 
	= (((4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x34U)))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_766)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_849 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_800) 
		     >> (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2eU))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_784 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_768)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_788 
	= (((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456) 
		   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_769)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_253 
	= (((0xfU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x21U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_44)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7651(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7651\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_377 
	= ((0U == (0xfU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x21U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_44))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_208 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_272 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_750 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_734)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_845 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_836 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7652(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7652\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3250,607,0,19);
    VL_SIGW(__Vtemp3251,607,0,19);
    VL_SIGW(__Vtemp3277,607,0,19);
    VL_SIGW(__Vtemp3278,607,0,19);
    // Body
    __Vtemp3250[0U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0U]);
    __Vtemp3250[1U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[1U]);
    __Vtemp3250[2U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[2U]);
    __Vtemp3250[3U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[3U]);
    __Vtemp3250[4U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[4U]);
    __Vtemp3250[5U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[5U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[5U]);
    __Vtemp3250[6U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[6U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[6U]);
    __Vtemp3250[7U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[7U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[7U]);
    __Vtemp3250[8U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[8U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[8U]);
    __Vtemp3250[9U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[9U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[9U]);
    __Vtemp3250[0xaU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xaU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xaU]);
    __Vtemp3250[0xbU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xbU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xbU]);
    __Vtemp3250[0xcU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xcU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xcU]);
    __Vtemp3250[0xdU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xdU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xdU]);
    __Vtemp3250[0xeU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xeU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xeU]);
    __Vtemp3250[0xfU] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0xfU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xfU]);
    __Vtemp3250[0x10U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x10U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x10U]);
    __Vtemp3250[0x11U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x11U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x11U]);
    __Vtemp3250[0x12U] = (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0x12U] 
				     | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x12U]));
    VL_SHIFTR_WWI(592,592,10, __Vtemp3251, __Vtemp3250, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_669 
	= (1U & (__Vtemp3251[0U] | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_836 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_682 
	= (((0U != (((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U] 
				      ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U]) 
				     | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U] 
					^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U])) 
				    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U] 
				       ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U])) 
				   | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U] 
				      ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U])) 
				  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U] 
				     ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U])) 
				 | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[5U] 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[5U])) 
				| (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[6U] 
				   ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[6U])) 
			       | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[7U] 
				  ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[7U])) 
			      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[8U] 
				 ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[8U])) 
			     | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[9U] 
				^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[9U])) 
			    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xaU] 
			       ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xaU])) 
			   | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xbU] 
			      ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xbU])) 
			  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xcU] 
			     ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xcU])) 
			 | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xdU] 
			    ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xdU])) 
			| (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xeU] 
			   ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xeU])) 
		       | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xfU] 
			  ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0xfU])) 
		      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x10U] 
			 ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x10U])) 
		     | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x11U] 
			^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x11U])) 
		    | ((0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		       ^ (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0x12U])))) 
	    | (0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U] 
				       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U]) 
				      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[5U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[6U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[7U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[8U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[9U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
		      | (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0x12U])))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_823 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_760)) 
						  >> 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						      >> 4U))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_682 
	= (((0U != (((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
				      ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U]) 
				     | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U] 
					^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U])) 
				    | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U] 
				       ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U])) 
				   | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U] 
				      ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U])) 
				  | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U] 
				     ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U])) 
				 | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U] 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[5U])) 
				| (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U] 
				   ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[6U])) 
			       | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U] 
				  ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[7U])) 
			      | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U] 
				 ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[8U])) 
			     | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U] 
				^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[9U])) 
			    | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xaU] 
			       ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xaU])) 
			   | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xbU] 
			      ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xbU])) 
			  | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xcU] 
			     ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xcU])) 
			 | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xdU] 
			    ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xdU])) 
			| (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xeU] 
			   ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xeU])) 
		       | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xfU] 
			  ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0xfU])) 
		      | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x10U] 
			 ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x10U])) 
		     | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x11U] 
			^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x11U])) 
		    | ((0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		       ^ (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0x12U])))) 
	    | (0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
				       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U]) 
				      | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
		      | (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0x12U])))) 
	   | (IData)(vlTOPp->reset));
    __Vtemp3277[0U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0U]);
    __Vtemp3277[1U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[1U]);
    __Vtemp3277[2U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[2U]);
    __Vtemp3277[3U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[3U]);
    __Vtemp3277[4U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[4U]);
    __Vtemp3277[5U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[5U]);
    __Vtemp3277[6U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[6U]);
    __Vtemp3277[7U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[7U]);
    __Vtemp3277[8U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[8U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[8U]);
    __Vtemp3277[9U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[9U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[9U]);
    __Vtemp3277[0xaU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xaU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xaU]);
    __Vtemp3277[0xbU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xbU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xbU]);
    __Vtemp3277[0xcU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xcU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xcU]);
    __Vtemp3277[0xdU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xdU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xdU]);
    __Vtemp3277[0xeU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xeU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xeU]);
    __Vtemp3277[0xfU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xfU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xfU]);
    __Vtemp3277[0x10U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x10U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x10U]);
    __Vtemp3277[0x11U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x11U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x11U]);
    __Vtemp3277[0x12U] = (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x12U] 
				     | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x12U]));
    VL_SHIFTR_WWI(592,592,10, __Vtemp3278, __Vtemp3277, 
		  (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_675 
	= (1U & (__Vtemp3278[0U] | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7653(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7653\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_829 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_766)) 
						  >> 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						      >> 6U))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_829 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_766)) 
						  >> 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						      >> 6U))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_621 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_611)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_574) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_567))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_604 
	= (1U & ((((((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_561)) 
		       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_562))) 
		      & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_570)) 
			 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_563)))) 
		     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_571)) 
			| (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_564)))) 
		    & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_572)) 
		       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_565)))) 
		   & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_573)) 
		      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_566)))) 
		  & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_574)) 
		     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_567)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_18 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_11) 
		   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_11) 
		      - (IData)(1U)))) | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_45 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_38) 
		   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_38) 
		      - (IData)(1U)))) | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7654(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7654\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_35 
	= ((IData)(vlTOPp->reset) | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid) 
					  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
					     >> 3U)) 
					 & (0U == (0x3ffU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
						      >> 4U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs_0)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset 
	= (1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14308 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_)) 
		   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn))) 
		  | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_)) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_multiclk__TOP__7655(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_multiclk__TOP__7655\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_66 
	= ((0U == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_799 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_755)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_707)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_137 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			 >> 9U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___GEN_15 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_810)))
		  ? ((IData)(1U) << (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						   >> 0x2eU))))
		  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1557 
	= ((0x6eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
	    ? (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55) 
				  << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54) 
						<< 0x10U) 
					       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53) 
						   << 8U) 
						  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52)))))) 
		<< 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51) 
					      << 0x18U) 
					     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50) 
						 << 0x10U) 
						| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49) 
						    << 8U) 
						   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48)))))))
	    : ((0x6fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
	        ? (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63) 
				      << 0x18U) | (
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62) 
						    << 0x10U) 
						   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61) 
						       << 8U) 
						      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60)))))) 
		    << 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59) 
						  << 0x18U) 
						 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58) 
						     << 0x10U) 
						    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57) 
							<< 8U) 
						       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56)))))))
	        : ((0x70U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
		    ? (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7) 
					  << 0x18U) 
					 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6) 
					     << 0x10U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5) 
						<< 8U) 
					       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4)))))) 
			<< 0x20U) | (QData)((IData)(
						    (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3) 
						      << 0x18U) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2) 
							 << 0x10U) 
							| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1) 
							    << 8U) 
							   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0)))))))
		    : ((0x80U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
		        ? VL_ULL(0x380006f00c0006f)
		        : ((0x81U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
			    ? VL_ULL(0xff0000f0440006f)
			    : ((0x82U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
			        ? VL_ULL(0xf14024737b241073)
			        : ((0x83U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
				    ? VL_ULL(0x4004440310802023)
				    : ((0x84U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
				        ? VL_ULL(0xfe0408e300347413)
				        : ((0x85U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					    ? VL_ULL(0x4086300147413)
					    : ((0x86U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					        ? VL_ULL(0x100022237b202473)
					        : (
						   (0x87U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						    ? VL_ULL(0xf140247330000067)
						    : 
						   ((0x88U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						     ? VL_ULL(0x7b20247310802423)
						     : 
						    ((0x89U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						      ? VL_ULL(0x100026237b200073)
						      : (QData)((IData)(
									((0x8aU 
									  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
									  ? 0x100073U
									  : 0U))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_multiclk__TOP__7657(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_multiclk__TOP__7657\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_360 
	= ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf)) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4) 
			   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
			      >> 1U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8) 
					  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
					     >> 2U))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
			    >> 3U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16) 
					& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
					   >> 4U))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20) 
		       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
			  >> 5U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24) 
				      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
					 >> 6U))) | 
		  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28) 
		   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
		      >> 7U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32) 
				  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
				     >> 8U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36) 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
						    >> 9U))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
		     >> 0xaU))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44) 
				   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
				      >> 0xbU))) | 
	     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48) 
	      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
		 >> 0xcU))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52) 
			       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
				  >> 0xdU))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56) 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
						   >> 0xeU)));
}
