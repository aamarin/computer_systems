#include "unity.h"
#include "problem2_60.h"
void setUp(void) {}
void tearDown(void) {}

void test_prob2_60_should_replace0thByteWithHexFF(void) {
    TEST_ASSERT_EQUAL_HEX32(0x123456FF, replace_byte(0x12345678, 0, 0xFF));
}

void test_prob2_60_should_replace1stByteWithHexEC(void) {
    TEST_ASSERT_EQUAL_HEX32(0x0000EC00, replace_byte(0x0, 1, 0xEC));
}

void test_prob2_60_should_replace2ndByteWithHexBB(void) {
    TEST_ASSERT_EQUAL_HEX32(0xFFBBFFFF, replace_byte(0xFFFFFFFF, 2, 0xBB));
}

void test_prob2_60_should_replace3rdByteWithHexAA(void) {
    TEST_ASSERT_EQUAL_HEX32(0xAA345678, replace_byte(0x12345678, 3, 0xAA));
}

void test_prob2_60_should_doNothing(void) {
    TEST_ASSERT_EQUAL_HEX32(0x98765432, replace_byte(0x98765432, 4, 0xCC));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_prob2_60_should_replace0thByteWithHexFF);
    RUN_TEST(test_prob2_60_should_replace1stByteWithHexEC);
    RUN_TEST(test_prob2_60_should_replace2ndByteWithHexBB);
    RUN_TEST(test_prob2_60_should_replace3rdByteWithHexAA);
    return UNITY_END();
}