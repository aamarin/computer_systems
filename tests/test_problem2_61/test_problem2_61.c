#include "unity.h"
#include "problem2_61.h"

void setUp(void) {}
void tearDown(void) {}

// testing is any bit 1
void test_prob2_61_should_passAnyBitIsOneTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345678));
}

// testing is any bit 0
void test_prob2_61_should_passAnyBitIsZeroTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345678));
}

// testing is any bit 1 on the last byte
void test_prob2_61_should_passAnyBitIsOneOnLastByteTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345678));
}

void test_prob2_61_should_failAnyBitIsOneOnLastByteTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345600));
}

// testing is any bit 0 on the last byte
void test_prob2_61_should_passAnyBitIsZeroOnLastByteTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345601));
}

void test_prob2_61_should_failAnyBitIsZeroOnLastByteTest(void) {
    TEST_ASSERT_EQUAL(1, problem2_61(0x12345601));
}

int main(void) {
    UNITY_BEGIN();
    return UNITY_END();
}