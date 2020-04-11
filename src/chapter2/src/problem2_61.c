#include "problem2_61.h"
#include <stdio.h>

int problem2_61(const int x) {
    // restrictions/rules for problem 6.1, FORBIDDEN:
    // 1) Conditionals, loops, swtich statements, function calls, and macro invocations
    // 2) Division, modulus, and multiplication
    // 3) Relative comparison operators

    // A) Any it of x equals 1 (can only fail for the all 0's case)
    const int is_any_bit_1 = x & (~0);

    // B) Any bit of x equals 0 (can only fail for all 1's case)
    const int is_any_bit_0 = x ^ (~0);

    // C) Any bit in the least significant byte (LSB) of x equal 1
    // Same as (A) but on the LSB.
    const int is_x_lsb_any_bit_1 = (is_any_bit_1 & 0xFF);

    // D) Any bit in the least significant byte (LSB) of x equal 0
    // Same as (B) but on the LSB.
    const int is_x_lsb_any_bit_0 = is_any_bit_0 & 0xFF;

    return is_any_bit_1 && is_any_bit_0 && is_x_lsb_any_bit_1 && is_x_lsb_any_bit_0;  
}