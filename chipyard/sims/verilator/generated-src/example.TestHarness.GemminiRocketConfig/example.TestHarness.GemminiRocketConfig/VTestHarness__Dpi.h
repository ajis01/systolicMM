// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to insure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimSerial.v:1
    extern int serial_tick (unsigned char serial_out_valid, unsigned char* serial_out_ready, int serial_out_bits, unsigned char* serial_in_valid, unsigned char serial_in_ready, int* serial_in_bits);
    // DPI import at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.v:3
    extern void uart_init (const char* filename, int uartno);
    // DPI import at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.v:8
    extern void uart_tick (unsigned char serial_out_valid, unsigned char* serial_out_ready, char serial_out_bits, unsigned char* serial_in_valid, unsigned char serial_in_ready, char* serial_in_bits);
    
#ifdef __cplusplus
}
#endif
