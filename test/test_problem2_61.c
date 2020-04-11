#include "unity.h"
#include "problem2_61.h"

// testing is any bit 1
void test_prob2_61_should_passAnyBitIsOne(void) {
    TEST_ASSERT_EQUAL_INT32(1, problem2_61(0x12345678));
}

void test_prob2_61_should_failAnyBitIsOne(void) {
    TEST_ASSERT_EQUAL_INT32(0, problem2_61(0x0));
}

// testing is any bit 0
void test_prob2_61_should_passAnyBitIsZero(void) {
    TEST_ASSERT_EQUAL_INT32(1, problem2_61(0x12345678));
}

void test_prob2_61_should_failAnyBitIsZero(void) {
    TEST_ASSERT_EQUAL_INT32(0, problem2_61(~0));
}

// testing is any bit 1 on the last byte
void test_prob2_61_should_passAnyBitIsOneOnLastByte(void) {
    TEST_ASSERT_EQUAL_INT32(1, problem2_61(0x1234560F));
}

void test_prob2_61_should_failAnyBitIsOneOnLastByte(void) {
    TEST_ASSERT_EQUAL_INT32(0, problem2_61(0x12345600));
}

// testing is any bit 0 on the last byte
void test_prob2_61_should_passAnyBitIsZeroOnLastByte(void) {
    TEST_ASSERT_EQUAL_INT32(1, problem2_61(0x12345601));
}

void test_prob2_61_should_failAnyBitIsZeroOnLastByte(void) {
    TEST_ASSERT_EQUAL_INT32(0, problem2_61(0x123456FF));
}