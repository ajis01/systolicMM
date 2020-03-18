// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_settle__TOP__6853(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__6853\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1536 
	= ((0x6aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
	    ? (0U == (0x80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
			       >> 3U))) : ((0x6bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					    ? (0U == 
					       (0x80U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						   >> 3U)))
					    : ((0x6cU 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					        ? (0U 
						   == 
						   (0x80U 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						       >> 3U)))
					        : (
						   (0x6dU 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						    ? 
						   (0U 
						    == 
						    (0x80U 
						     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							>> 3U)))
						    : 
						   ((0x6eU 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						     ? 
						    (0U 
						     == 
						     (0x80U 
						      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							 >> 3U)))
						     : 
						    ((0x6fU 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						      ? 
						     (0U 
						      == 
						      (0x80U 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							  >> 3U)))
						      : 
						     ((0x70U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						       ? 
						      (0U 
						       == 
						       (0x80U 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							   >> 3U)))
						       : 
						      ((0x80U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						        ? 
						       (0U 
							== 
							(0x80U 
							 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							    >> 3U)))
						        : 
						       ((0x81U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
							 ? 
							(0U 
							 == 
							 (0x80U 
							  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							     >> 3U)))
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1527))))))))));
}

VL_INLINE_OPT void VTestHarness::_settle__TOP__7184(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7184\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy 
	= (((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe) 
		& (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe) 
		  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe) 
		 & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe) 
		& (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) 
	    | (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1) 
			 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3664) 
			    & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					       >> 8U)))))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3664) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 0x10U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3664) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x18U)))))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3669) 
			& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					   >> 8U)))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3669) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 0x10U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3669) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x18U)))))) 
	       & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) 
	   | ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_294) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3799) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3799) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3799) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))));
}
