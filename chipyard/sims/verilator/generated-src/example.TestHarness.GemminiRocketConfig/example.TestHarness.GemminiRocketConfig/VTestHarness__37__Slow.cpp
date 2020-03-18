// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

void VTestHarness::_settle__TOP__7367(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7367\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3064,607,0,19);
    VL_SIGW(__Vtemp3065,607,0,19);
    VL_SIGW(__Vtemp3070,1023,0,32);
    VL_SIGW(__Vtemp3071,1023,0,32);
    // Body
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
    __Vtemp3064[0U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0U]);
    __Vtemp3064[1U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[1U]);
    __Vtemp3064[2U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[2U]);
    __Vtemp3064[3U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[3U]);
    __Vtemp3064[4U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[4U]);
    __Vtemp3064[5U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[5U]);
    __Vtemp3064[6U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[6U]);
    __Vtemp3064[7U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[7U]);
    __Vtemp3064[8U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[8U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[8U]);
    __Vtemp3064[9U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[9U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[9U]);
    __Vtemp3064[0xaU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xaU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xaU]);
    __Vtemp3064[0xbU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xbU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xbU]);
    __Vtemp3064[0xcU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xcU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xcU]);
    __Vtemp3064[0xdU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xdU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xdU]);
    __Vtemp3064[0xeU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xeU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xeU]);
    __Vtemp3064[0xfU] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xfU] 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xfU]);
    __Vtemp3064[0x10U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x10U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x10U]);
    __Vtemp3064[0x11U] = (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x11U] 
			  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x11U]);
    __Vtemp3064[0x12U] = (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x12U] 
				     | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x12U]));
    VL_SHIFTR_WWI(592,592,10, __Vtemp3065, __Vtemp3064, 
		  (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_675 
	= (1U & (__Vtemp3065[0U] | (IData)(vlTOPp->reset)));
    __Vtemp3070[0U] = 1U;
    __Vtemp3070[1U] = 0U;
    __Vtemp3070[2U] = 0U;
    __Vtemp3070[3U] = 0U;
    __Vtemp3070[4U] = 0U;
    __Vtemp3070[5U] = 0U;
    __Vtemp3070[6U] = 0U;
    __Vtemp3070[7U] = 0U;
    __Vtemp3070[8U] = 0U;
    __Vtemp3070[9U] = 0U;
    __Vtemp3070[0xaU] = 0U;
    __Vtemp3070[0xbU] = 0U;
    __Vtemp3070[0xcU] = 0U;
    __Vtemp3070[0xdU] = 0U;
    __Vtemp3070[0xeU] = 0U;
    __Vtemp3070[0xfU] = 0U;
    __Vtemp3070[0x10U] = 0U;
    __Vtemp3070[0x11U] = 0U;
    __Vtemp3070[0x12U] = 0U;
    __Vtemp3070[0x13U] = 0U;
    __Vtemp3070[0x14U] = 0U;
    __Vtemp3070[0x15U] = 0U;
    __Vtemp3070[0x16U] = 0U;
    __Vtemp3070[0x17U] = 0U;
    __Vtemp3070[0x18U] = 0U;
    __Vtemp3070[0x19U] = 0U;
    __Vtemp3070[0x1aU] = 0U;
    __Vtemp3070[0x1bU] = 0U;
    __Vtemp3070[0x1cU] = 0U;
    __Vtemp3070[0x1dU] = 0U;
    __Vtemp3070[0x1eU] = 0U;
    __Vtemp3070[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp3071, __Vtemp3070, 
		  (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[1U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[1U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[1U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[2U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[2U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[3U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[3U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[4U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[4U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[4U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[5U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[5U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[5U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[6U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[6U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[6U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[7U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[7U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[7U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[8U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[8U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[8U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[8U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[9U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[9U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[9U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[9U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xaU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xaU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xaU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xbU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xbU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xbU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xbU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xcU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xcU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xcU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xcU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xdU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xdU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xdU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xdU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xeU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xeU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xeU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xeU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0xfU] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xfU] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0xfU]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0xfU] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x10U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x10U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x10U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0x10U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x11U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x11U] 
	    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x11U]) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
		  ? __Vtemp3071[0x11U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_679[0x12U] 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x12U] 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0x12U]) 
		      & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
			     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_641)))
			     ? __Vtemp3071[0x12U] : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full));
}

void VTestHarness::_settle__TOP__7368(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7368\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_712 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_673)));
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
}

void VTestHarness::_settle__TOP__7369(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7369\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_324 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708) 
	   & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_139 
					 >> 0x38U)))));
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
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_182 
	= ((0xb6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x300000007000000)
	    : ((0xb5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x300000003000000)
	        : ((0xb4U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x3000000bd010000)
		    : ((0xb3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x1000000003000000)
		        : ((0xb2U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x30746e69) : 
			   ((0xb1U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0x6c632c7663736972)
			     : ((0xb0U == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0x1b0000000d000000)
				 : ((0xafU == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x300000000000030)
				     : ((0xaeU == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x3030303030324074)
					 : ((0xadU 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x6e696c6301000000)
					     : ((0xacU 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x200000001000000)
						 : 
						((0xabU 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x7801000004000000)
						  : 
						 ((0xaaU 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x30000000c000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_169)))))))))))));
}

void VTestHarness::_settle__TOP__7370(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7370\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_21 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_861 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820) 
		     - ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
			& ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)
			    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_872)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_872));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_823) 
	   | (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_823) 
		    << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1763 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1759) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1759)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1802 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1798 
		       >> 0x10U) | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1798));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[0U] 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1424 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	      & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
				 >> 0x18U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
		  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
				>> 0x18U))) : ((1U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
							   >> 0xcU)))
					        ? (~ (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
							      >> 0xcU)))
					        : (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid))))));
}

void VTestHarness::_settle__TOP__7371(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7371\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1447 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 1U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x19U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x19U)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xdU)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xdU)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 1U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1470 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 2U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1aU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1aU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xeU)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xeU)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 2U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1493 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 3U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1bU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1bU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xfU)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0xfU)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 3U)))))));
}

void VTestHarness::_settle__TOP__7372(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7372\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1516 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 4U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1cU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1cU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x10U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x10U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 4U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1539 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 5U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1dU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1dU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x11U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x11U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 5U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1562 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 6U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1eU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1eU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x12U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x12U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 6U)))))));
}

void VTestHarness::_settle__TOP__7373(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7373\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1585 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 7U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x1fU)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x1fU)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x13U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x13U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 7U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1608 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 8U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x20U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x20U)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x14U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x14U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 8U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1631 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 9U) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					 >> 0x21U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			  ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					>> 0x21U)))
			  : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x15U)))
			      ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 0x15U)))
			      : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					    >> 9U)))))));
}

void VTestHarness::_settle__TOP__7374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1654 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 0xaU) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					   >> 0x22U)) 
				  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			    ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					  >> 0x22U)))
			    : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0x16U)))
			        ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0x16U)))
			        : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0xaU)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1677 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
	       >> 0xbU) & ((1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					   >> 0x23U)) 
				  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
			    ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					  >> 0x23U)))
			    : ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0x17U)))
			        ? (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0x17U)))
			        : (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
					      >> 0xbU)))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_out_w_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_198));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_199 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_198));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_198));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= (((0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
			 << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
				      >> 1U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_150)) 
	   | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__7375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7375\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_591 
	= ((0U == (0xffffU & (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
				<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
					     >> 1U)) 
			      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_150))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___GEN_26)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_req_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_64));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_49));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_34));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_0_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_19));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_6) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_6) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_6) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_6) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_ready 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_922) 
		     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)))) 
		 & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_878) 
			& (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)))) 
		    & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_834) 
			   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)))) 
		       & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_790) 
			     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_ready 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_929) 
		     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)))) 
		 & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_885) 
			& (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)))) 
		    & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_841) 
			   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)))) 
		       & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_797) 
			     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43))))))));
}

void VTestHarness::_settle__TOP__7376(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7376\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_ready 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_936) 
		     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)))) 
		 & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_892) 
			& (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)))) 
		    & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_848) 
			   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)))) 
		       & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_804) 
			     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_0_req_valid)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_19) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_0_req_valid) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_19)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_xcpt 
	= (1U & ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_interrupt) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu_io_debug_if)) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if)) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst)) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109) 
		      >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_illegal_insn)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1393 
	= (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1382) 
	      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1217) 
		   & (((0xfffffffeU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222) 
		       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen) 
			    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr) 
			       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)))))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1219) 
		     & (((0xfffffffeU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222) 
			 >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)) 
			& (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen) 
			      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr) 
				 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2))))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1221) 
		    & (((0xfffffffeU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222) 
			>> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd)) 
		       & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen) 
			     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr) 
				== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd)))))))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_singleStep) 
		& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid)) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid)))) 
	    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_csr_en) 
		& (0U == (0x900U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				    >> 0x14U)))) & 
	       ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_wflags))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid)) 
		 | (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wen))) 
		| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_fp) 
	      & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
		    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1335 
		       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
		      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1335 
			 >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)))) 
		  | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1335 
			>> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
		    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1335 
		       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd))))));
}

void VTestHarness::_settle__TOP__7377(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7377\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_130 
	= ((VL_ULL(0xff00ff00ff00ff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_120 
					>> 8U)) | (VL_ULL(0xff00ff00ff00ff00) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_120 
						      << 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1166 
	= (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	     != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_16) 
	    | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1170 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	    | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	   & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_16));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_275 
	= ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state))
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
	        ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1773 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_b_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_b_ready 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_b_ready));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_mem_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_72) 
	     << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_70) 
					 << 0xfU) & 
					(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
					 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_72) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_70) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
			 >> 0x11U)))) << 0xeU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_69) 
						    << 0xdU) 
						   | (0xfffe000U 
						      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_67) 
							  << 0xdU) 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
							    >> 4U)))) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_69) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_67) 
							  & (~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
							      >> 0x11U)))) 
						      << 0xcU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_66) 
							  << 0xbU) 
							 | (0x3fff800U 
							    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_64) 
								<< 0xbU) 
							       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
								  >> 6U)))) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_66) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_64) 
								& (~ 
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
								    >> 0x11U)))) 
							    << 0xaU) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_63) 
								<< 9U) 
							       | (0xfffe00U 
								  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_61) 
								      << 9U) 
								     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									>> 8U)))) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_63) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_61) 
								      & (~ 
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									  >> 0x11U)))) 
								  << 8U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_60) 
								      << 7U) 
								     | (0x3fff80U 
									& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_58) 
									    << 7U) 
									   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									      >> 0xaU)))) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_60) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_58) 
									    & (~ 
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
									<< 6U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_57) 
									    << 5U) 
									   | (0xfffe0U 
									      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_55) 
										<< 5U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0xcU)))) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_57) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_55) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
									      << 4U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_54) 
										<< 3U) 
										| (0x3fff8U 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_52) 
										<< 3U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0xeU)))) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_52) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_51) 
										<< 1U) 
										| (0xfffeU 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_49) 
										<< 1U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x10U)))) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_51) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_49) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))))))))))))))))));
}

void VTestHarness::_settle__TOP__7378(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7378\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nack_head 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_nack_valid) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_4))) 
	   & (0U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_22 
	= ((~ (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)) 
		& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0))) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_mem_req_valid)))) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_5)) 
	      & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_1) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s0_read))) 
		 & (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state)) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__cached_grant_wait))) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_28 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_flush_icache) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb_common)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb_common) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[4U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[4U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[4U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[4U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_req_bits_sink 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
			    >> 8U))) << 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_443));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_last 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter) 
	   == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single)
		      ? 0U : (~ (0x1ffU & (((IData)(0x3fU) 
					    << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
					   >> 4U))))));
}

void VTestHarness::_settle__TOP__7379(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7379\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_199) 
		     >> (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156))) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)
		     ? ((IData)(1U) << (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156)))
		     : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703)));
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
}

void VTestHarness::_settle__TOP__7380(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7380\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_415 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14308 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_)) 
		   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn))) 
		  | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_829 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_766)) 
						  >> 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
						      >> 6U))))) 
		 | (IData)(vlTOPp->reset)));
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
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_829 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_766)) 
						  >> 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						      >> 6U))))) 
		 | (IData)(vlTOPp->reset)));
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
}

void VTestHarness::_settle__TOP__7381(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7381\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_995)));
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

void VTestHarness::_settle__TOP__7382(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7382\n"); );
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
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_195 
	= ((0xc3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x67756265642c7663)
	    : ((0xc2U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x736972003331302d)
	        : ((0xc1U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x67756265642c6576)
		    : ((0xc0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x696669731b000000)
		        : ((0xbfU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x2100000003000000)
			    : ((0xbeU == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x304072656c6c)
			        : ((0xbdU == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x6f72746e6f632d67)
				    : ((0xbcU == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0x7562656401000000)
				        : ((0xbbU == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x2000000006c6f72)
					    : ((0xbaU 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0x746e6f63a1010000)
					        : (
						   (0xb9U 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x800000003000000)
						    : 
						   ((0xb8U 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x10000000002)
						     : 
						    ((0xb7U 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0xf01000008000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_182)))))))))))));
}

void VTestHarness::_settle__TOP__7383(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7383\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_986 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_695));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		     ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826))
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1802) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1802)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1717) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_out_w_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_208 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_199)) 
		   | (~ ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1)
			  ? vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_last
			 [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_bits_last)))) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_185))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_187 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_199));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_9 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_121 
	= (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_72) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__w_buf_valid)) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_94))) 
		 | (IData)(vlTOPp->reset)));
}

void VTestHarness::_settle__TOP__7384(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7384\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_113 
	= (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_72) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_write_en)) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_req_bits_addr) 
			== (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_318))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem_io_ren 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_72) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_70));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_34)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_34))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116)));
}

void VTestHarness::_settle__TOP__7385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1407 
	= (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1393) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__blocked) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_perf_grant))))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rocc) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rocc_blocked))) 
	    | ((0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	       & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state)) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_resp_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wxd))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_valid)))) 
	   | (((((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_4)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_14) 
		      | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__xactBusy)) 
			 | ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_valid) 
					  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid)) 
					 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid)) 
					| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid)) 
				       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid)) 
				      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid)) 
				     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid)) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid)) 
				  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid)) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid)) 
			       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid)) 
			      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid)) 
			     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid)) 
			    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_valid))))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_rocc))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_rocc))) 
		| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148)) 
	       & (4U == (0x2054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_mem_busy) 
		 & ((((0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
			 >> 0x19U)) | (0x1008U == (0x3058U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_fence) 
		       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem) 
			  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rocc)))))));
}

void VTestHarness::_settle__TOP__7386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_140 
	= ((VL_ULL(0xf0f0f0f0f0f0f0f) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_130 
					 >> 4U)) | 
	   (VL_ULL(0xf0f0f0f0f0f0f0f0) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_130 
					  << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1821 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1773) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1782)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_b_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_b_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s0_clk_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_write)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434 
	= (((0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
			 << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
				      >> 1U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596 
	= ((0U == (0xffffU & (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
				<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
					     >> 1U)) 
			      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq_io_enq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_nack_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nack_head)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_flush_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_999 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_write));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_req_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3811)
	    ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_22))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_22));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1379 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rocc_blocked));
}

void VTestHarness::_settle__TOP__7387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_eret)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_18[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_18[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_22) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_need_r 
	= (((((0U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_22) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15)))) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)) 
	     & (5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))) 
	   & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
	      | (3U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__s2_latch 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_45));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_addr 
	= (0x1fffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
}

void VTestHarness::_settle__TOP__7388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_addr 
	= (0x1fffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((2U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((2U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_addr 
	= (0x1fffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((4U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((4U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_addr 
	= (0x1fffU & ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((8U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((8U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
}

void VTestHarness::_settle__TOP__7389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_addr 
	= (0x1fffU & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x10U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_addr 
	= (0x1fffU & ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x20U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x20U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_addr 
	= (0x1fffU & ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x40U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
}

void VTestHarness::_settle__TOP__7390(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7390\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_addr 
	= (0x1fffU & ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x80U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x80U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 1U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 2U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 3U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 3U)));
}

void VTestHarness::_settle__TOP__7391(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7391\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_548 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 4U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_586 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 5U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_624 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 6U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_662 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 7U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_199));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits 
	= (((0U != (0xfU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1691 
				    >> 0x20U)))) << 5U) 
	   | (((0U != (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1695 
				  >> 0x10U))) << 4U) 
	      | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1699) 
				   >> 8U))) << 3U) 
		 | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703) 
				     >> 4U))) << 2U) 
		    | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
				      >> 2U))) << 1U) 
		       | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
				 >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
					   >> 1U))))))));
}

void VTestHarness::_settle__TOP__7392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completedDevs 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_0) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completer_1))
		    ? ((IData)(1U) << (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_data
						     [0U] 
						     >> 0x20U))))
		    : 0U));
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
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_208 
	= ((0xd0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0xe00000003000000)
	    : ((0xcfU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x3030303340)
	        : ((0xceU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x6563697665642d72)
		    : ((0xcdU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x6f72726501000000)
		        : ((0xccU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x2000000006c6f72)
			    : ((0xcbU == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x746e6f63a1010000)
			        : ((0xcaU == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x800000003000000)
				    : ((0xc9U == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0x10000000000000)
				        : ((0xc8U == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0xf01000008000000)
					    : ((0xc7U 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0x3000000ffff0000)
					        : (
						   (0xc6U 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x3000000bd010000)
						    : 
						   ((0xc5U 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x800000003000000)
						     : 
						    ((0xc4U 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0x3331302d)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_195)))))))))))));
}

void VTestHarness::_settle__TOP__7393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_847 
	= (1U & (((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_854 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)) 
		  | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data) 
					  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data) 
				 >> 0x1fU)) | (0xfffffffeU 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data 
							   >> 0x20U)) 
						  << 1U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xfffffe00U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
					  << 9U)) | 
			  ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_mask) 
					   << 1U)) 
			   | (1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data 
					     >> 0x20U)) 
				    >> 0x1fU)))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size) 
				<< 0xeU)) | ((0xffffff00U 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_source) 
						 << 8U)) 
					     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[3U]))
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xffe00000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode)
					    : 4U) << 0x15U)) 
			  | ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
					       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_param)
					       : 0U) 
					     << 0x12U)) 
			     | ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size) 
						<< 0xeU)) 
				| ((0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source) 
						   << 8U)) 
				   | (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
						>> 0x17U))))))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_904 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_695)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_986 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1810 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806)));
}

void VTestHarness::_settle__TOP__7394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_43 
	= ((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_195 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_187)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_185))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_9)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1) 
	       & ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT___T_5 
	= (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__w_buf_valid) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem_io_ren)) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem_io_raddr) 
			== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__waddr_buf)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_49)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_49))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1407) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_csr_stall)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_pause));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_150 
	= ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_140 
					  >> 2U)) | 
	   (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_140 
					  << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1872 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s0_clk_en) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_write)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq_io_enq_valid));
}

void VTestHarness::_settle__TOP__7395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_28 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq_io_enq_valid)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_5))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_io_x 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_0_s2_nack)
	    ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse)
			 ? 1U : 0U) : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
				        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_55)
					    ? (((2U 
						 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_chosen)) 
						| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid))
					        ? 1U
					        : 0U)
					    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
				        : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
					    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pte_cache_hit)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)
					        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_req_ready)
						    ? 2U
						    : 1U))
					    : ((2U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
					        ? 4U
					        : (
						   (4U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld)
						     ? 0U
						     : 5U)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_req_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_req_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_mem_req_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_retire 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_bht_update_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_wrong_npc)) 
	   & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_983) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal))) 
	      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_825) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jalr)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal))));
}

void VTestHarness::_settle__TOP__7396(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7396\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1092 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__dcache_kill_mem) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_xcpt));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[5U] 
	= ((0xffffff00U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram_RW_0_addr_pipe_0] 
			   << 8U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_19[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[5U] 
	= ((0xffffff00U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram_RW_0_addr_pipe_0] 
			   << 8U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_19[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_38 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_3) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_need_r));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_wmode 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_397 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_435 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_473 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_511 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_548)));
}

void VTestHarness::_settle__TOP__7398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_58 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid)) 
		  | (IData)((VL_ULL(0xfffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data 
	= ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_45 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_38) 
		   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_38) 
		      - (IData)(1U)))) | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_221 
	= ((0xddU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x200000001000000)
	    : ((0xdcU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0xe201000008000000)
	        : ((0xdbU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x300000004000000)
		    : ((0xdaU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0xd101000004000000)
		        : ((0xd9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x300000000737470)
			    : ((0xd8U == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x75727265746e692d)
			        : ((0xd7U == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x6c616e7265747865)
				    : ((0xd6U == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0x100000002000000)
				        : ((0xd5U == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x10000000300000)
					    : ((0xd4U 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0xf01000008000000)
					        : (
						   (0xd3U 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x300000000000030)
						    : 
						   ((0xd2U 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x726f7272652c6576)
						     : 
						    ((0xd1U 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0x696669731b000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_208)))))))))))));
}

void VTestHarness::_settle__TOP__7400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1015 
	= (((7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		   >> 0x15U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1019 
	= (((7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		   >> 0x12U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1007)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1023 
	= (((0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		     >> 0xeU)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1027 
	= (((0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		      >> 8U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1009)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1031 
	= (((0x7fffffffU & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			     << 0x17U) | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
					  >> 9U))) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1137 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
			      >> (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					   >> 8U)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_400 
	= ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			     >> 0xeU))) & (0U == (0x7ffff000U 
						  & (0x3000U 
						     ^ 
						     ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						       << 0x17U) 
						      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							 >> 9U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0x7c000000U & (0xc000000U ^ (
						   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						    << 0x17U) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						      >> 9U))))) 
	      | (0U == (0x7fff0000U & (0x2000000U ^ 
				       ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					 << 0x17U) 
					| (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
					   >> 9U)))))) 
	     | (0U == (0x7ffff000U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
				       << 0x17U) | 
				      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				       >> 9U))))) | 
	    (0U == (0x7ffff000U & (0x54000000U ^ ((
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						   << 0x17U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						     >> 9U)))))) 
	   | (0U == (0x7ffff000U & (0x2010000U ^ ((
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						   << 0x17U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						     >> 9U))))));
}

void VTestHarness::_settle__TOP__7403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_64)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_64))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___GEN_46 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem))
		  ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)
			   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25)
			       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10)
			       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_6)
				   ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
					   - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nReady)))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_6)) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
	       >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC)) 
	      | (1U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__out 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
	    | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu_io_adder_out
	    : (((QData)((IData)(((0xcU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
				 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__slt)))) 
		| ((((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
		     | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))
		     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2
		     : VL_ULL(0)) | (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
				      | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
					 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2)
				      : VL_ULL(0)))) 
	       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_36)
		    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[0U])))
		    : VL_ULL(0)) | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
				     ? ((VL_ULL(0x5555555555555555) 
					 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_150 
					    >> 1U)) 
					| (VL_ULL(0xaaaaaaaaaaaaaaaa) 
					   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_150 
					      << 1U)))
				     : VL_ULL(0)))));
}

void VTestHarness::_settle__TOP__7404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT___T_15 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_req_ready))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___GEN_60 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_req_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__replaying));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_req_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_req_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_86 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_85) 
		    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_retire)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_36 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_retire) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1307 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_retire))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1338 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_dcache_miss) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wfd)) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_reg_valid) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_764))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wen 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wxd));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid)
	    : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_83) 
		& (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_mask) 
		      >> 1U))) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
				   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_356)
				   : (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid)) 
				       & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch_1) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)) 
					   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictJump_1)) 
					  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn_1))) 
				      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_356)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_752 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd 
	= (1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_valid)) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_interrupt)));
}

void VTestHarness::_settle__TOP__7405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_reset 
	= ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_redirect 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_9 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid) 
			 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid)) 
			| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_flush_icache)) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_bht_update_valid)) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__imem_might_request_reg)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s0_fq_has_space)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid)
				    ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt) 
					| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_eret))
				        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret)
					    ? (VL_ULL(0xffffffffff) 
					       & ((0x20000000U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst)
						   ? 
						  ((0x40000000U 
						    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst)
						    ? 
						   (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_445)
						    : 
						   (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_419))
						   : 
						  (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_526)))
					    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
					        ? (QData)((IData)(
								  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)
								    ? 
								   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)
								     ? 0x800U
								     : 0x808U)
								    : 0x800U)))
					        : (
						   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1252) 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__cause 
								>> 0x3fU))) 
						    & (0U 
						       == 
						       (3U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__cause 
								   >> 6U)))))
						    ? 
						   ((VL_ULL(0xffffffffffffff00) 
						     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1252) 
						    | (QData)((IData)(
								      (0xfcU 
								       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__cause) 
									  << 2U)))))
						    : 
						   (VL_ULL(0xfffffffffffffffc) 
						    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1252))))
				        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb)
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_pc
					    : (VL_ULL(0xfffffffffe) 
					       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_966)))
				    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_replay)
				        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_pc
				        : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_45)
					     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_45)
						 : 
						(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid) 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn_1)) 
						 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_45))))
					    ? ((5U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
					        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_5
					        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_402)
					    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
					        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_46
					        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
						    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_46
						    : 
						   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid) 
						     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch_1) 
							| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictJump_1)))
						     ? 
						    (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1)
						       ? 
						      ((VL_ULL(2) 
							| (~ 
							   (VL_ULL(3) 
							    | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_pc)))) 
						       - VL_ULL(2))
						       : 
						      (VL_ULL(2) 
						       | (~ 
							  (VL_ULL(3) 
							   | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_pc))))) 
						     + 
						     (((QData)((IData)(
								       (0xffU 
									& VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_610 
										>> 0x1fU))))))) 
						       << 0x20U) 
						      | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_610))))
						     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_46)))))));
}

void VTestHarness::_settle__TOP__7406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__killm 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1092) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid))) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt_io_nack_mem)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__killm_common 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1092) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[5U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_20[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[5U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_20[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_38) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_block_r)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankEn 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_opcode___05FT_18_data))))
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_113)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_115 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_113) 
		    >> (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankSum 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_333 
	= (((0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum) 
		     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask))) 
	    << 3U) | (((0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum) 
				>> 4U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask))) 
		       << 2U) | (((0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum) 
					   >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask))) 
				  << 1U) | (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum) 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data)) 
	   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]);
}

void VTestHarness::_settle__TOP__7407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data)) 
	   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_size___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_size
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_put___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_put
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_80 
	= (0xfffffffU & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used 
			  & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid)
				 ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
				 : 0U))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_43)
					     ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH
					     : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data)) 
	   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data)) 
	   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
}

void VTestHarness::_settle__TOP__7408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_52_data 
	= ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_234 
	= ((0xeaU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0xbd01000010000000)
	    : ((0xe9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x300000063010000)
	        : ((0xe8U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x3000000)
		    : ((0xe7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x3063696c702c76) : 
		       ((0xe6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
			 ? VL_ULL(0x637369721b000000)
			 : ((0xe5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0xc00000003000000)
			     : ((0xe4U == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0x100000052010000)
				 : ((0xe3U == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x400000003000000)
				     : ((0xe2U == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x30303030)
					 : ((0xe1U 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x3030634072656c6c)
					     : ((0xe0U 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x6f72746e6f632d74)
						 : 
						((0xdfU 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x7075727265746e69)
						  : 
						 ((0xdeU 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x100000002000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_221)))))))))))));
}

void VTestHarness::_settle__TOP__7409(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7409\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_444 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			       >> 0xeU))) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_438) 
					     | (0U 
						== 
						(0x7fff0000U 
						 & (0x10000U 
						    ^ 
						    ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						      << 0x17U) 
						     | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							>> 9U)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_520 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			       >> 0xeU))) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_438))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1158 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088)) 
						  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54))));
}

void VTestHarness::_settle__TOP__7410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1158 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088)) 
						  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
}

void VTestHarness::_settle__TOP__7411(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7411\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_356 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354) 
		    - ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
		       & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_418)
			   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_448)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_18)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379) 
			>> 2U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))));
}

void VTestHarness::_settle__TOP__7412(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7412\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379) 
			>> 1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail_push_tail_data 
	= ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_40 
	= (VL_ULL(0xfffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
				  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_83 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
				   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid)
					  ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data) 
					      == ((0x23U 
						   >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits))
						   ? 
						  vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail
						  [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits]
						   : 0U))
					      ? (VL_ULL(1) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits))
					      : VL_ULL(0))
					  : VL_ULL(0)))) 
				  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_43)
				      ? (VL_ULL(1) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))
				      : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_295 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_155)
	    ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_req_ready) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_req_valid)) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_12 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_7)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_30 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_25)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_6) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_1))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_43)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_24) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_2))));
}

void VTestHarness::_settle__TOP__7413(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7413\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_66 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_61)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_42) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_3))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_77)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_60) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_4))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_ex 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_replay) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	      & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_req_ready))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_div) 
		     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_dcache_miss) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_load_use)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1348 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1338) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1343));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1341 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1335 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1338)
	       ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 7U)))
	       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1252 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_set_sboard) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wen));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_wen 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wen) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_fpu_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_fp));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_798 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_interrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done)
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
			>> 6U) : (~ (IData)((VL_ULL(0x1ffffffff) 
					     & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
						>> 6U))))));
}

void VTestHarness::_settle__TOP__7414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	    & (0U == (3U & (~ (IData)((VL_ULL(0x1fffffffff) 
				       & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
					  >> 2U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_261));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_267)
		     : (~ (IData)((VL_ULL(0x7ffffffff) 
				   & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
				      >> 4U))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_en 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	    & (1U == (3U & (~ (IData)((VL_ULL(0x1fffffffff) 
				       & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
					  >> 2U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_261));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_267)
		     : (~ (IData)((VL_ULL(0x7ffffffff) 
				   & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
				      >> 4U))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2_RW0_en 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	    & (2U == (3U & (~ (IData)((VL_ULL(0x1fffffffff) 
				       & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
					  >> 2U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_261));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2_RW0_addr 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_267)
		     : (~ (IData)((VL_ULL(0x7ffffffff) 
				   & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
				      >> 4U))))));
}

void VTestHarness::_settle__TOP__7415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3_RW0_en 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	    & (3U == (3U & (~ (IData)((VL_ULL(0x1fffffffff) 
				       & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
					  >> 2U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_261));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3_RW0_addr 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_267)
		     : (~ (IData)((VL_ULL(0x7ffffffff) 
				   & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_60) 
				      >> 4U))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killm 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__killm_common) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_xcpt)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__fpu_kill_mem));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_masked 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid) 
	   & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb__DOT___T))
		  ? (2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
		  : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb__DOT___T)) 
		     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__killm_common) 
			 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ldst_xcpt)) 
			| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__fpu_kill_mem))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[5U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[5U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankSel 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_valid)
	    ? (((((8U & ((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242))))
		   ? 3U : 0U) << 6U) | ((((4U & ((IData)(1U) 
						 << 
						 (3U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242))))
					   ? 3U : 0U) 
					 << 4U) | (
						   (((2U 
						      & ((IData)(1U) 
							 << 
							 (3U 
							  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242))))
						      ? 3U
						      : 0U) 
						    << 2U) 
						   | ((1U 
						       & ((IData)(1U) 
							  << 
							  (3U 
							   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242))))
						       ? 3U
						       : 0U)))) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask) 
		   << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask) 
			      << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask) 
					 << 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask)))))
	    : 0U);
}

void VTestHarness::_settle__TOP__7417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lb_tag_mismatch 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__scheduleTag) 
	   != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_52_data));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247 
	= ((0xf7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x400000078010000)
	    : ((0xf6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x400000003000000)
	        : ((0xf5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x300000000020000)
		    : ((0xf4U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x400000003000000)
		        : ((0xf3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x3000000ed010000)
			    : ((0xf2U == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x400000003000000)
			        : ((0xf1U == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x6c6f72746e6f63)
				    : ((0xf0U == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0xa101000008000000)
				        : ((0xefU == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x300000000000004)
					    : ((0xeeU 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0xc0f010000)
					        : (
						   (0xedU 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x800000003000000)
						    : 
						   ((0xecU 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x900000003000000)
						     : 
						    ((0xebU 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0xb00000003000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_234)))))))))))));
}

void VTestHarness::_settle__TOP__7418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_99 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
	     << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
				       << 7U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
			 >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62) 
					       << 5U) 
					      | (0xfffffe0U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
						     << 5U) 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						       >> 4U)))) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62) 
						  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
						     & (~ 
							(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							 >> 9U)))) 
						 << 4U) 
						| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59) 
						     << 3U) 
						    | (0x3fffff8U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
							   << 3U) 
							  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							     >> 6U)))) 
						   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
							   & (~ 
							      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							       >> 9U)))) 
						       << 2U) 
						      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56) 
							   << 1U) 
							  | (0xfffffeU 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
								 << 1U) 
								& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
								   >> 8U)))) 
							 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56) 
							    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
							       & (~ 
								  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
								   >> 9U)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1158 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_16)));
}

void VTestHarness::_settle__TOP__7419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088)) 
						  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1158 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1088)) 
						  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1093 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1054)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1157)))
	    ? (VL_ULL(1) << (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						   >> 0x11U))))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_245)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_245));
}

void VTestHarness::_settle__TOP__7420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_227)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_227));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_236)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_236));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad_io_dma_write_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_acc_read_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_295));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_8 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_acc_read_req_valid)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_295)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_acc_read_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_295));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_807 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_ex));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1347 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1341 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1343)
		  ? ((IData)(1U) << (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
					      >> 3U)))
		  : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_rs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_wen)
	    ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_waddr))
	        ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_waddr) 
		    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_wdata
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_470_data)
	        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_470_data)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_470_data);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_rs_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_wen)
	    ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_waddr))
	        ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_waddr) 
		    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_wdata
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_476_data)
	        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_476_data)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465___05FT_476_data);
}

void VTestHarness::_settle__TOP__7421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
	   & (0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_cmd_uses_tlb));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[6U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[6U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d_io_deq_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d_io_deq_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_267 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_265) 
		   >> (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_303 
	= ((((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_265))
	      ? 3U : 0U) << 6U) | ((((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_265))
				      ? 3U : 0U) << 4U) 
				   | ((((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_265))
					 ? 3U : 0U) 
				       << 2U) | ((1U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_265))
						  ? 3U
						  : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_219 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_335) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_bs))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_ready 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires)) 
		   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_335)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_bs))));
}

void VTestHarness::_settle__TOP__7422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_uses_directory_for_lb 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1717) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lb_tag_mismatch));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_uses_directory_assuming_no_bypass 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1717) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lb_tag_mismatch));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_260 
	= ((0x104U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				 >> 3U))) ? VL_ULL(0x30303030303034)
	    : ((0x103U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				     >> 3U))) ? VL_ULL(0x35406c6169726573)
	        : ((0x102U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					 >> 3U))) ? VL_ULL(0x100000002000000)
		    : ((0x101U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
		        ? VL_ULL(0x6d656da1010000) : 
		       ((0x100U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					      >> 3U)))
			 ? VL_ULL(0x400000003000000)
			 : ((0xffU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0x10000000100)
			     : ((0xfeU == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0xf01000008000000)
				 : ((0xfdU == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x300000000306d6f)
				     : ((0xfcU == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x722c657669666973)
					 : ((0xfbU 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x1b0000000c000000)
					     : ((0xfaU 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x300000000000030)
						 : 
						((0xf9U 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x30303031406d6f72)
						  : 
						 ((0xf8U 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x100000002000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247)))))))))))));
}

void VTestHarness::_settle__TOP__7423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_458 
	= (((0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		       << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				    >> 1U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_608 
	= ((0U == (0xffU & (((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			      << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
					   >> 1U)) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_99))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1217 
	= ((((VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
	     != (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1221 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1147 
				    | vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1210 
	= (1U & ((IData)((VL_ULL(0x1fffffffff) & ((VL_ULL(0x1fffffffff) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
						      | vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1147)) 
						  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___GEN_15 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051)))
		  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
		  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_8 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_24 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
}

void VTestHarness::_settle__TOP__7424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__7424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_880 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1106)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_994 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_994 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1731)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_27 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1931)))
		    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))
		    : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1722 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1722 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killx 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_807) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_5 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_807) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__killm)))));
}
