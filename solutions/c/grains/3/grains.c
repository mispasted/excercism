#include "grains.h"
#include <stdint.h>

#define BOARD_SIZE 64
#if BOARD_SIZE == 64
    #define TOTAL_SIZE -1; 
#else
    #error "TOTAL_SIZE is not defined for BOARD_SIZE != 64" 
#endif

uint64_t square(uint8_t index) {
    // Ensure the index is in the proper range
    if (index >= 1 && index <= BOARD_SIZE) 
        return (uint64_t) 1 << (index - 1);
    
    // Indicate index out of range
    else
        return 0;
}
uint64_t total(void) {
    return (uint64_t) TOTAL_SIZE;
}