// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VQueueReasonableReadyValid__Syms.h"
#include "VQueueReasonableReadyValid.h"

// FUNCTIONS
VQueueReasonableReadyValid__Syms::VQueueReasonableReadyValid__Syms(VQueueReasonableReadyValid* topp, const char* namep)
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
    __Vscope_QueueReasonableReadyValid.configure(this,name(),"QueueReasonableReadyValid");
}
