// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedVendingMachineTester.h for the primary calling header

#include "VParameterizedVendingMachineTester.h" // For This
#include "VParameterizedVendingMachineTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VParameterizedVendingMachineTester) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = __VlSymsp = new VParameterizedVendingMachineTester__Syms(this, name());
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VParameterizedVendingMachineTester::__Vconfigure(VParameterizedVendingMachineTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VParameterizedVendingMachineTester::~VParameterizedVendingMachineTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VParameterizedVendingMachineTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VParameterizedVendingMachineTester::eval\n"); );
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VParameterizedVendingMachineTester::_eval_initial_loop(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VParameterizedVendingMachineTester::_sequent__TOP__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_sequent__TOP__1\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v:71
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
			       & (~ ((~ ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
					 >> 1U)) | (IData)(vlTOPp->reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
			       & (~ ((~ ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
					 >> 1U)) | (IData)(vlTOPp->reset))))))) {
	    VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:95: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v",95,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				>> 1U) & (~ ((~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101)) 
					     | (IData)(vlTOPp->reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				>> 1U) & (~ ((~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101)) 
					     | (IData)(vlTOPp->reset))))))) {
	    VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:117: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v",117,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v:71
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense)
					   ? 0U : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___T_9)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v:611
    vlTOPp->ParameterizedVendingMachineTester__DOT__value 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__done)
					   ? 0U : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___T_2)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v",626,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v",637,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___T_11))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at VendingMachineGenerator.scala:97 assert(dut.io.dispense === expectedVec(idx))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___T_11))))) {
	    VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:659: Assertion failed in %NParameterizedVendingMachineTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622445210081979047685367831/ParameterizedVendingMachineTester.v",659,"");
	}
    }
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
	= (4U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT__done 
	= (0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT___T_2 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101 
	= ((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
	    ? 1U : ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
		     ? 2U : ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
			      ? 0U : ((0x60U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
				       ? 1U : ((0x5fU 
						== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
					        ? 1U
					        : (
						   (0x5eU 
						    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						    ? 2U
						    : 
						   ((0x5dU 
						     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						     ? 2U
						     : 
						    ((0x5cU 
						      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						      ? 0U
						      : 
						     ((0x5bU 
						       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						       ? 2U
						       : 
						      ((0x5aU 
							== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						        ? 2U
						        : 
						       ((0x59U 
							 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							 ? 0U
							 : 
							((0x58U 
							  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							  ? 1U
							  : 
							 ((0x57U 
							   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							   ? 1U
							   : 
							  ((0x56U 
							    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							    ? 1U
							    : 
							   ((0x55U 
							     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							     ? 2U
							     : 
							    ((0x54U 
							      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							      ? 2U
							      : 
							     ((0x53U 
							       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							       ? 0U
							       : 
							      ((0x52U 
								== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							        ? 0U
							        : 
							       ((0x51U 
								 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								 ? 2U
								 : 
								((0x50U 
								  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								  ? 2U
								  : 
								 ((0x4fU 
								   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								   ? 2U
								   : 
								  ((0x4eU 
								    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								    ? 1U
								    : 
								   ((0x4dU 
								     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								     ? 1U
								     : 
								    ((0x4cU 
								      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								      ? 0U
								      : 
								     ((0x4bU 
								       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								       ? 0U
								       : 
								      ((0x4aU 
									== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								        ? 1U
								        : 
								       ((0x49U 
									 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									 ? 2U
									 : 
									((0x48U 
									  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									  ? 1U
									  : 
									 ((0x47U 
									   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									   ? 1U
									   : 
									  ((0x46U 
									    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									    ? 0U
									    : 
									   ((0x45U 
									     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									     ? 0U
									     : 
									    ((0x44U 
									      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									      ? 1U
									      : 
									     ((0x43U 
									       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									       ? 0U
									       : 
									      ((0x42U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									        ? 0U
									        : 
									       ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x40U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x39U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x38U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x37U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x34U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x33U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x31U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x2fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x2dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x2bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x29U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x26U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x23U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x22U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x20U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x1dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x17U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x16U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x15U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x14U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x12U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x10U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0xdU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xcU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((7U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((6U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___T_9 
	= (7U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value) 
		 + ((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
		     ? 2U : ((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
			      ? 1U : 0U))));
}

void VParameterizedVendingMachineTester::_settle__TOP__2(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_settle__TOP__2\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ParameterizedVendingMachineTester__DOT__done 
	= (0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT___T_2 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
	= (4U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT___T_11 
	= (((4U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
	    == ((0x63U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		& ((0x62U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		   & ((0x61U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		      & ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			 & ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			    | ((0x5eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			       & ((0x5dU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				  & ((0x5cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				     & ((0x5bU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					| ((0x5aU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					   & ((0x59U 
					       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					      & ((0x58U 
						  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						 & ((0x57U 
						     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						    & ((0x56U 
							== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						       | ((0x55U 
							   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							  & ((0x54U 
							      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							     & ((0x53U 
								 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								& ((0x52U 
								    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								   & ((0x51U 
								       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								      | ((0x50U 
									  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									 & ((0x4fU 
									     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									    & ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									       | ((0x4dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x49U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x40U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x35U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x24U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x19U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x18U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x13U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x10U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xfU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xeU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xdU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xaU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((9U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((8U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& (7U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101 
	= ((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
	    ? 1U : ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
		     ? 2U : ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
			      ? 0U : ((0x60U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
				       ? 1U : ((0x5fU 
						== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
					        ? 1U
					        : (
						   (0x5eU 
						    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						    ? 2U
						    : 
						   ((0x5dU 
						     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						     ? 2U
						     : 
						    ((0x5cU 
						      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						      ? 0U
						      : 
						     ((0x5bU 
						       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						       ? 2U
						       : 
						      ((0x5aU 
							== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
						        ? 2U
						        : 
						       ((0x59U 
							 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							 ? 0U
							 : 
							((0x58U 
							  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							  ? 1U
							  : 
							 ((0x57U 
							   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							   ? 1U
							   : 
							  ((0x56U 
							    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							    ? 1U
							    : 
							   ((0x55U 
							     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							     ? 2U
							     : 
							    ((0x54U 
							      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							      ? 2U
							      : 
							     ((0x53U 
							       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							       ? 0U
							       : 
							      ((0x52U 
								== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
							        ? 0U
							        : 
							       ((0x51U 
								 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								 ? 2U
								 : 
								((0x50U 
								  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								  ? 2U
								  : 
								 ((0x4fU 
								   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								   ? 2U
								   : 
								  ((0x4eU 
								    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								    ? 1U
								    : 
								   ((0x4dU 
								     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								     ? 1U
								     : 
								    ((0x4cU 
								      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								      ? 0U
								      : 
								     ((0x4bU 
								       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								       ? 0U
								       : 
								      ((0x4aU 
									== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
								        ? 1U
								        : 
								       ((0x49U 
									 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									 ? 2U
									 : 
									((0x48U 
									  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									  ? 1U
									  : 
									 ((0x47U 
									   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									   ? 1U
									   : 
									  ((0x46U 
									    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									    ? 0U
									    : 
									   ((0x45U 
									     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									     ? 0U
									     : 
									    ((0x44U 
									      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									      ? 1U
									      : 
									     ((0x43U 
									       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									       ? 0U
									       : 
									      ((0x42U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
									        ? 0U
									        : 
									       ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x40U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x3aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x39U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x38U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x37U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x34U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x33U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x31U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x2fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x2dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x2bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x29U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x26U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x23U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x22U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x20U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x1dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x17U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x16U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x15U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x14U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0x12U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0x10U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((0xdU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xcU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((7U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((6U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 2U
										 : 
										((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 0U
										 : 
										((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 
										((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))
										 ? 1U
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___T_9 
	= (7U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value) 
		 + ((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
		     ? 2U : ((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
			      ? 1U : 0U))));
}

VL_INLINE_OPT void VParameterizedVendingMachineTester::_combo__TOP__3(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_combo__TOP__3\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ParameterizedVendingMachineTester__DOT___T_11 
	= (((4U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
	    == ((0x63U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		& ((0x62U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		   & ((0x61U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
		      & ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			 & ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			    | ((0x5eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			       & ((0x5dU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				  & ((0x5cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				     & ((0x5bU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					| ((0x5aU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					   & ((0x59U 
					       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					      & ((0x58U 
						  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						 & ((0x57U 
						     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						    & ((0x56U 
							== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						       | ((0x55U 
							   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							  & ((0x54U 
							      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							     & ((0x53U 
								 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								& ((0x52U 
								    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								   & ((0x51U 
								       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								      | ((0x50U 
									  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									 & ((0x4fU 
									     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									    & ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									       | ((0x4dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x49U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x40U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x35U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x24U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x19U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x18U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x13U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x10U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xfU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xeU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xdU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xaU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((9U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((8U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& (7U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
	   | (IData)(vlTOPp->reset));
}

void VParameterizedVendingMachineTester::_eval(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VParameterizedVendingMachineTester::_eval_initial(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_initial\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedVendingMachineTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::final\n"); );
    // Variables
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedVendingMachineTester::_eval_settle(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_settle\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VParameterizedVendingMachineTester::_change_request(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_change_request\n"); );
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VParameterizedVendingMachineTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VParameterizedVendingMachineTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ParameterizedVendingMachineTester__DOT__value = VL_RAND_RESET_I(7);
    ParameterizedVendingMachineTester__DOT__done = VL_RAND_RESET_I(1);
    ParameterizedVendingMachineTester__DOT___T_2 = VL_RAND_RESET_I(7);
    ParameterizedVendingMachineTester__DOT___GEN_101 = VL_RAND_RESET_I(2);
    ParameterizedVendingMachineTester__DOT___T_11 = VL_RAND_RESET_I(1);
    ParameterizedVendingMachineTester__DOT__dut__DOT__value = VL_RAND_RESET_I(3);
    ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense = VL_RAND_RESET_I(1);
    ParameterizedVendingMachineTester__DOT__dut__DOT___T_9 = VL_RAND_RESET_I(3);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
