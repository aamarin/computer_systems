#include <stdio.h>
#include "problem2_59.h"

int prob2_59(int x, int y) {
    int x_lower_byte = 0x0FF & x;
    printf("0x%08x\n", x_lower_byte);
    int y_upper = (~0u << 8) & y;
    printf("0x%08x\n", (~0u << 8));
    return (x_lower_byte | y_upper);
}