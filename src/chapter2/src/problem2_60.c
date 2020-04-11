#include <assert.h>
#include "problem2_60.h"

unsigned replace_byte(const unsigned x, const int i, const unsigned char b) {
    assert(i >= 0);

    const unsigned shift_val = (unsigned)i * 8;
    assert(shift_val < sizeof(int)*8);

    const unsigned mask_clear_byte = ~(0xFF << shift_val);
    const unsigned x_cleared_byte = mask_clear_byte & x;
    const unsigned mask_set_byte = (unsigned) b << shift_val;
    return mask_set_byte | x_cleared_byte;
}