#include <stdio.h>

int is_little_endian() {
    const int x = 1;
    char *y = (char*) &x;
    return (y[0] == 0x01);
}

int main(void) {
    printf("%d\n", is_little_endian());
    return 0;
}