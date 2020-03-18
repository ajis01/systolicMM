// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

void VTestHarness::_settle__TOP__5361(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5361\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate_out 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate__DOT__en_latched) 
	   & (IData)(vlTOPp->clock));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1072 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1070) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1073 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1070));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1127 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1116);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_21 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_54 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_37)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1233 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1222);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_26 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_9)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_841);
}

void VTestHarness::_settle__TOP__5362(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5362\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_807 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_804));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_806 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_804) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_994 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_992) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_992));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_994 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_992) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_992));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_994 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_992) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_992));
}

void VTestHarness::_settle__TOP__5363(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5363\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_994 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_992) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_992));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_687);
}

void VTestHarness::_settle__TOP__5364(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5364\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1167 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1156);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1167 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1156);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_923));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_925 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_923) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_11 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_9) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_12 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_9));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_29 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_861 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_850);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_861 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_850);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_841);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1163);
}

void VTestHarness::_settle__TOP__5365(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5365\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_841);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_839 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_828);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1956 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1945);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1051) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1051));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1072 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1070) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1073 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1070));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1127 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1116);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3815 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3633));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3635 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3633) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3682 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3841 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__c_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_4 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1148 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1137);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1148 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1137);
}

void VTestHarness::_settle__TOP__5366(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5366\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_241 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_239) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_242 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_239));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_6 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__state));
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_460 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_468 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_470 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_481 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_489 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_491 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_555 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_563 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))) 
		   - (IData)(1U)));
}

void VTestHarness::_settle__TOP__5367(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5367\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_565 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_2930 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__value)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_29 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_37 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_39 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1382 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_8 
	= (4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__raddr));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_16 
	= (7U & (((IData)(1U) - ((IData)(4U) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__raddr))) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_18 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__raddr)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_29 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_27) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_30 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_27));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_4 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__state));
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171);
}

void VTestHarness::_settle__TOP__5368(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5368\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_12 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_90 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_98 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_45 
	= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
		 >> 0x1fU));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_46 
	= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
		 >> 0x1fU));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1725 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1714);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__wrap_1 
	= (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_14 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap_1 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1)));
}

void VTestHarness::_settle__TOP__5369(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5369\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_10 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_4 
	= (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1776 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1765);
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1725 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1714);
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1261 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1250);
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1261 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1250);
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_685 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_674);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__pulse 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__prescaler));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_15 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__prescaler) 
		      - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_21 
	= (0x100U | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__shifter) 
			      >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_16 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_2)));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_27 
	= (0x363U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_3));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_29 
	= (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_3)));
}

void VTestHarness::_settle__TOP__5370(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5370\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_35 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_4)));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_36 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_38 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_39 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_14 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531 
	= (((((((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
			      [0U] >> 4U))) | (0U == 
					       (3U 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
						   [0U] 
						   >> 4U)))) 
	       | (0x20U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
		  [0U])) | (0x21U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
			    [0U])) | (0x22U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
				      [0U])) | (0x24U 
						== 
						vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
						[0U])) 
	   | (IData)(vlTOPp->reset));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/EICG_wrapper.v:11
    if ((1U & (~ (IData)(vlTOPp->clock)))) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate__DOT__en_latched 
	    = vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__clock_en;
    }
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1];
}

void VTestHarness::_settle__TOP__5371(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5371\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wmask 
	= ((0x80U & ((0x80U & ((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
			       [0U])) | ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
					     >> 0xaU)) 
					 << 7U))) | 
	   ((0x40U & ((0xc0U & ((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
				[0U])) | ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
					      >> 0xaU)) 
					  << 6U))) 
	    | ((0x20U & ((0xe0U & ((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
				   [0U])) | ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
						 >> 0xaU)) 
					     << 5U))) 
	       | ((0x10U & ((0xf0U & ((IData)(1U) << 
				      vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
				      [0U])) | ((~ 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
						  >> 0xaU)) 
						<< 4U))) 
		  | ((8U & ((0xf8U & ((IData)(1U) << 
				      vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
				      [0U])) | ((~ 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
						  >> 0xaU)) 
						<< 3U))) 
		     | ((4U & ((0xfcU & ((IData)(1U) 
					 << vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
					 [0U])) | (
						   (~ 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
						     >> 0xaU)) 
						   << 2U))) 
			| ((2U & ((0xfeU & ((IData)(1U) 
					    << vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
					    [0U])) 
				  | ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
					 >> 0xaU)) 
				     << 1U))) | (1U 
						 & ((0xffU 
						     & ((IData)(1U) 
							<< 
							vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way
							[0U])) 
						    | (~ 
						       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
							>> 0xaU)))))))))));
}

void VTestHarness::_settle__TOP__5372(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5372\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_data
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_strb___05FT_18_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_strb
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_38 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__idle) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_763 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
		   [0U]) | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
		  [0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_592 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_579)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_596 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_size
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_604 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_sink
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_582)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_608 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590 
	= (1U & (((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
		   [0U]) | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
		  [0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_746 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_733)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_758 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_sink
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_736)) 
	   | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5373(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5373\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_762 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_737)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
			 [0U] & (~ (0x3fU & ((IData)(7U) 
					     << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					     [0U])))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_539 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_543 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_547 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_551 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
	    [0U] == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_588 
	= ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_596 
	= (((3U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
	     [0U]) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_600 
	= (((0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
		       [0U] >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1718,607,0,19);
    // Body
    VL_SHIFTR_WWI(592,592,10, __Vtemp1718, vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612, 
		  vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
		  [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_661 
	= (1U & ((~ __Vtemp1718[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_time 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_93)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24 
	= ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_dirty
	    [0U] << 0xfU) | ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_state
			      [0U] << 0xdU) | ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_clients
						[0U] 
						<< 0xcU) 
					       | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_tag
					       [0U])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__next_empty_alloc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__next_empty_alloc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
	      >> 0x19U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
		      >> 0x36U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param___05FT_18_data 
	= ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_sfence));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_0_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_0_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_0_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_1_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_1_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_1_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_2_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_2_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_2_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[3U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_3_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_3_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_3_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[4U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_4_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_4_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_4_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[5U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_5_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_5_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_5_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[6U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_6_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_6_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_6_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[7U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_7_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_7_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_7_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[8U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_8_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_8_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_8_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[9U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_9_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_9_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_9_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xaU] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_10_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_10_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_10_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xbU] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_11_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_11_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_11_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xcU] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_12_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_12_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_12_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xdU] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
	    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_13_0 
	       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_13_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_13_0);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xeU] 
	= (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_15_0 
					 + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_15_0)
				      : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_15_0))) 
		    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
						  ? 
						 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_14_0 
						  + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_14_0)
						  : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_14_0)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext_W0_data[0xfU] 
	= (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
				       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_15_0 
					  + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_15_0)
				       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_15_0))) 
		     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__acc_buf)
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4_14_0 
						   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_14_0)
						   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__wdata_buf_14_0)))) 
		   >> 0x20U));
}

void VTestHarness::_settle__TOP__5375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5375\n"); );
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_89 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_56) 
		     << 1U) >> (2U | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_56)))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4193 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
	   & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
		  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
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
}

void VTestHarness::_settle__TOP__5376(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5376\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_553 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent) 
	   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_bytes_to_read));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__amoalu__DOT__logic_and 
	= ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__amoalu__DOT__logic_xor 
	= ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_2 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
		     >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeOff))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data___05FT_18_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1][0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data___05FT_18_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1][1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data___05FT_18_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1][2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data___05FT_18_data[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1][3U];
}

void VTestHarness::_settle__TOP__5377(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5377\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1736,95,0,3);
    VL_SIGW(__Vtemp1737,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    __Vtemp1736[0U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp1736[1U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp1736[2U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp1737, __Vtemp1736, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[0U] 
	= __Vtemp1737[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[1U] 
	= __Vtemp1737[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U] 
	= (1U & __Vtemp1737[2U]);
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

void VTestHarness::_settle__TOP__5381(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5381\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VTestHarness::_settle__TOP__5385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_way 
	= (0xfU & ((0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_way)
		    : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_782))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left)));
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid));
}

void VTestHarness::_settle__TOP__5386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8 
	= ((6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
	    [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
			   [0U]) ? 2U : ((4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
					  [0U]) ? 1U
					  : ((3U == 
					      vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
					      [0U])
					      ? 1U : 
					     ((2U == 
					       vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
					       [0U])
					       ? 1U
					       : 0U)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_129 
	= (3U & ((~ (6U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113)) 
			    << 1U) | (4U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113)) 
					    << 2U))))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_decode_0_fp_illegal 
	= (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
		 | (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
			       >> 5U)))));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1385 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter)) 
	   & (0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_30 
	= (1U & ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
		  [0U]) | (1U & ((((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
				   [0U]) >> 2U) & (~ 
						   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						    [0U] 
						    >> 2U))))));
}

void VTestHarness::_settle__TOP__5387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_33 
	= (1U & ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
		  [0U]) | (1U & ((((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
				   [0U]) >> 2U) & (
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						   [0U] 
						   >> 2U)))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_178 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_182)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_171));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_csr_stall 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1658));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__result 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi)
	    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U])) 
		<< 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
			      << 0x1fU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
					   >> 1U)))
	    : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
}

void VTestHarness::_settle__TOP__5388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_249 
	= ((2U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		  [0U] >> 8U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
					[0U] >> 6U)));
}

void VTestHarness::_settle__TOP__5389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1];
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_259 
	= ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_index
		  [0U] >> 5U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_index
					[0U] >> 3U)));
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

void VTestHarness::_settle__TOP__5390(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5390\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag 
	= (((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))) 
	   | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_404 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_410 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_416 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_422 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_428 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_434 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_440 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_446 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3));
}

void VTestHarness::_settle__TOP__5391(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5391\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_404 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_410 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_416 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_422 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_428 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_434 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_440 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_446 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__buffering_done 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_started)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_written));
}

void VTestHarness::_settle__TOP__5392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_628 
	= ((0x10U & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
		     [0U] >> 0xeU)) | ((8U & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
					      [0U] 
					      >> 7U)) 
				       | ((4U & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
						 [0U] 
						 >> 7U)) 
					  | ((2U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
					       [0U] 
					       >> 3U)) 
					     | (1U 
						& vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
						[0U])))));
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
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pendingUInt 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_2) 
	    << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_1) 
		       << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_ctrl_toint));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last 
	= (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_last
	   [vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1] 
	   & vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_user
	   [vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1]);
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   | (1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum)));
}

void VTestHarness::_settle__TOP__5393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_20) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_isNaN));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_526 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_394 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec 
	   & (~ (QData)((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec))
				  ? 0xfeU : 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_137 
	= (0xfffffffU & ((0x1cU > (8U | (0x10U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
						  << 4U)))) 
			 & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
			     << 1U) >> (2U | (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123)))));
}

void VTestHarness::_settle__TOP__5394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x16U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_91 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_85)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_99 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_93)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw_io_invalidExc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_rocc));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_12 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__load_wb_double)
	     ? VL_ULL(0) : VL_ULL(0xffffffff00000000)) 
	   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__load_wb_data);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_31 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_spad_row_offset)
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sign)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sign))));
}

void VTestHarness::_settle__TOP__5395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_bytes_to_read) 
		    - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_invalidExc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_419 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_445 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_471 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
		      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
					  >> 0x17U)) 
				 << 1U)) | (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							  >> 0x17U))))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					   >> ((2U 
						& ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							    >> 0x16U)) 
						   << 1U)) 
					       | (1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							     >> 0x16U))))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					    >> ((2U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							     >> 0x15U)) 
						    << 1U)) 
						| (1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							      >> 0x15U))))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					       >> (
						   (2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 0x14U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 0x14U))))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					       >> (
						   (2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 0x13U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 0x13U))))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						  >> 
						  ((2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 0x12U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 0x12U))))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						>> 
						((2U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							      >> 0x11U)) 
						     << 1U)) 
						 | (1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							       >> 0x11U))))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						   >> 
						   ((2U 
						     & ((IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								 >> 0x10U)) 
							<< 1U)) 
						    | (1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								  >> 0x10U)))))))))))));
}

void VTestHarness::_settle__TOP__5397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_690 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask 
	= ((2U & ((((((((0x1fffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
				       >> 7U)) | (0xfffffeU 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						     >> 8U))) 
		       | (0x7ffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
				       >> 9U))) | (0x3ffffeU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						      >> 0xaU))) 
		     | (0x1ffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
				     >> 0xbU))) | (0xffffeU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						      >> 0xcU))) 
		   | (0x7fffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
				  >> 0xdU))) | (0x3fffeU 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						   >> 0xeU)))) 
	   | (1U & ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
			     >> 1U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
					>> 2U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						   >> 3U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
			  >> 4U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
				     >> 5U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
						>> 6U)) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_mask) 
		       >> 7U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_647 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
				   >> 1U))));
}

void VTestHarness::_settle__TOP__5398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_650 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_653 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_656 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf_replay 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Freplay)
		  ? (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
		     - (IData)(1U)) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_766 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_769 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_772 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_775 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_411 
	= (VL_ULL(0x2080000000000000) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
					  << 0x3bU) 
					 | (QData)((IData)(
							   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action) 
							     << 0xcU) 
							    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
								<< 7U) 
							       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
								   << 6U) 
								  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
								      << 4U) 
								     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u) 
									 << 3U) 
									| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
									    << 2U) 
									   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w) 
									       << 1U) 
									      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r))))))))))));
}

void VTestHarness::_settle__TOP__5399(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5399\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1744,127,0,4);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_388 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
	   & (~ ((1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec)
		  ? 0xfeU : 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_338 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    VL_SHIFTR_WWI(128,128,8, __Vtemp1744, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data, 
		  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent) 
			    << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__putFull_data[0U] 
	= __Vtemp1744[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__putFull_data[1U] 
	= __Vtemp1744[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__putFull_data[2U] 
	= __Vtemp1744[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__putFull_data[3U] 
	= __Vtemp1744[3U];
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
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_status_sd 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
	   | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_759 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
					>> 2U))))));
}

void VTestHarness::_settle__TOP__5400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_762 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_456 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
		      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
					  >> 7U)) << 1U)) 
			  | (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
					   >> 7U))))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					   >> ((2U 
						& ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							    >> 6U)) 
						   << 1U)) 
					       | (1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							     >> 6U))))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					    >> ((2U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							     >> 5U)) 
						    << 1U)) 
						| (1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							      >> 5U))))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					       >> (
						   (2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 4U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 4U))))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
					       >> (
						   (2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 3U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 3U))))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						  >> 
						  ((2U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
								>> 2U)) 
						       << 1U)) 
						   | (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
								 >> 2U))))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						>> 
						((2U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data 
							      >> 1U)) 
						     << 1U)) 
						 | (1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data 
							       >> 1U))))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_lut) 
						   >> 
						   ((2U 
						     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_data) 
							<< 1U)) 
						    | (1U 
						       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_6_0_data))))))))))));
}

void VTestHarness::_settle__TOP__5402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_347 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_320 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_329 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wxd 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wxd));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_302 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_311 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_249 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ))
	    ? (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1))
	    : (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1 
					       >> 0x1fU))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___T_30 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid)
				        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid)
					    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid)
					        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid)
						     ? 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid)
						      ? 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid)
						       ? 0xfU
						       : 0xeU)
						      : 0xdU)
						     : 0xcU)
						    : 0xbU)
					        : 0xaU)
					    : 9U) : 8U)
				    : 7U) : 6U) : 5U)
		        : 4U) : 3U) : 2U) : 1U);
}

void VTestHarness::_settle__TOP__5403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__accReadValid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_284 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_293 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_rw_cmd 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_csr) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid)
		  ? 0U : 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_586 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_mask))
						   ? 0xffU
						   : 0U)))))));
}

void VTestHarness::_settle__TOP__5404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_668 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_mask))
						   ? 0xffU
						   : 0U)))))));
}

void VTestHarness::_settle__TOP__5405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_15 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_25 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_0_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_73 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_1_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_121 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_2_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_169 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_3_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_217 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_4_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_265 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_5_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_313 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_6_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_361 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_7_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_409 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_8_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_457 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_9_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_505 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_10_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_553 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_11_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_601 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_12_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_649 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_13_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_697 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_14_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_745 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_15_0, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_shift));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_valid) 
	   & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_inst_funct)));
}
