// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VQueuePipeTester__Syms.h"
#include "VQueuePipeTester.h"

// FUNCTIONS
VQueuePipeTester__Syms::VQueuePipeTester__Syms(VQueuePipeTester* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scope names
    __Vscope_QueuePipeTester.configure(this,name(),"QueuePipeTester");
}
