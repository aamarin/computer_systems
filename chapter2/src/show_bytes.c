#include "../include/show_bytes.h"

void show_bytes(byte_pointer start, size_t len) {
    for(int i = 0; i < len; ++i) {
        printf(" %.2x\n", start[i]);
    }
}