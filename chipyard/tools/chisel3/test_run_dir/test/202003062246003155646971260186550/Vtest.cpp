// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest.h"             // For This
#include "Vtest__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtest) {
    Vtest__Syms* __restrict vlSymsp = __VlSymsp = new Vtest__Syms(this, name());
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtest::__Vconfigure(Vtest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtest::~Vtest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest::eval\n"); );
    Vtest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtest::_eval_initial_loop(Vtest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtest::_initial__TOP__1(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_initial__TOP__1\n"); );
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/test/202003062246003155646971260186550/test.v:3
    if (VL_UNLIKELY(Verilated::assertOn())) {
	VL_WRITEF("[%0t] %%Error: test.v:4: Assertion failed in %Ntest: My specific, expected error message!\n",
		  64,VL_TIME_Q(),vlSymsp->name());
	VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/test/202003062246003155646971260186550/test.v",4,"");
    }
    VL_WRITEF("test!\n");
    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/test/202003062246003155646971260186550/test.v",6,"");
}

void Vtest::_eval(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval\n"); );
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Tracing activity check at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/test/202003062246003155646971260186550/test.v:2
}

void Vtest::_eval_initial(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval_initial\n"); );
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::final\n"); );
    // Variables
    Vtest__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtest::_eval_settle(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval_settle\n"); );
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vtest::_change_request(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_change_request\n"); );
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vtest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_ctor_var_reset\n"); );
    // Body
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
