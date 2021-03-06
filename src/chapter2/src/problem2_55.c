#include "show_bytes.h"

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(void) {
    int a = 16;
    test_show_bytes(a);
    return 0;
}