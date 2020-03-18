// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdderTreeTester.h for the primary calling header

#include "VAdderTreeTester.h"  // For This
#include "VAdderTreeTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAdderTreeTester) {
    VAdderTreeTester__Syms* __restrict vlSymsp = __VlSymsp = new VAdderTreeTester__Syms(this, name());
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAdderTreeTester::__Vconfigure(VAdderTreeTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAdderTreeTester::~VAdderTreeTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAdderTreeTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdderTreeTester::eval\n"); );
    VAdderTreeTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAdderTreeTester::_eval_initial_loop(VAdderTreeTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAdderTreeTester::_sequent__TOP__1(VAdderTreeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_sequent__TOP__1\n"); );
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AdderTreeTester/202003062133508395278958353392542/AdderTreeTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AdderTreeTester/202003062133508395278958353392542/AdderTreeTester.v",13,"");
	}
    }
}

void VAdderTreeTester::_eval(VAdderTreeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_eval\n"); );
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAdderTreeTester::_eval_initial(VAdderTreeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_eval_initial\n"); );
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAdderTreeTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::final\n"); );
    // Variables
    VAdderTreeTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAdderTreeTester::_eval_settle(VAdderTreeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_eval_settle\n"); );
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VAdderTreeTester::_change_request(VAdderTreeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_change_request\n"); );
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAdderTreeTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VAdderTreeTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderTreeTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
