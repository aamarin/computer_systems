#include <stdio.h>

int prob2_59(int x, int y) {
    int x_lower_byte = 0x0FF & x;
    printf("0x%08x\n", x_lower_byte);
    int y_upper = (~0u << 8) & y;
    printf("0x%08x\n", (~0u << 8));
    return (x_lower_byte | y_upper);
}

int main(void) {
    printf("0x%08x\n", prob2_59(0xEE, 0x12345678));
    return 0;
}