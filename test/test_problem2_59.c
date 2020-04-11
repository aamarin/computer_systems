#include "unity.h"
#include "problem2_59.h"

void test_prob2_59_should_replaceLastByteWithHexEC(void) {
    TEST_ASSERT_EQUAL_HEX32(0x123456EC, prob2_59(0xEC, 0x12345678));
}

void test_prob2_59_should_replaceLastByteWithHexFF(void) {
    TEST_ASSERT_EQUAL_HEX32(0xFF, prob2_59(0xFF, 0x0));
}

void test_prob2_59_should_replaceLastByteWithHex00(void) {
    TEST_ASSERT_EQUAL_HEX32(0x00, prob2_59(0x0, 0xFF));
}