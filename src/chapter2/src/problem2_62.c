#include "problem2_62.h"
#include <stdio.h>

int shifts_are_arithmetic() {
    int bits_of_int = sizeof(int) * 8;
    int shift_val = bits_of_int - 1;
    int msbit_set = (~0) << shift_val;
    
    int value = msbit_set >> (bits_of_int - 1);
    const int mask = (~0u) << 1;

    return (value & mask) != 0;
}