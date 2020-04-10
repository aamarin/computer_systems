#include "show_bytes.h"

void test_show_bytes(short val) {
    double dval = (double) val;
    long lval = (long) val;

    show_short(val);
    show_long(lval);
    show_double(dval);
}

int main(void) {
    short a = 16;
    test_show_bytes(a);
    return 0;
}