#include "unity.h"
#include <stdbool.h>
#include "array2to8MaxSearch.h"

#define SIZE_TEST 8

void setUp(void)
{
}

void tearDown(void)
{
}

void test_posArray_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 3;
    const uint8_t rightAnswer[3] = { 0, 6, 7};
    float targetArr[SIZE_TEST] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};
    uint8_t K = 10;
    uint8_t answerArr[rightSize];
    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, SIZE_TEST, K);
    if( answerSize == rightSize)
    {
        for(uint8_t i = 0; i < rightSize; i++)
        {
            if( rightAnswer[i] != answerArr[i] )
            {
                testCondition = false;
            }
        }
    }
	else
	{
		testCondition = false;
	}
    TEST_ASSERT_TRUE(testCondition)
}

void test_nullArray_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 8;
    const uint8_t rightAnswer[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    float targetArr[SIZE_TEST] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    uint8_t K = 10;
    uint8_t answerArr[rightSize];
    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, SIZE_TEST, K);
    if( answerSize == rightSize)
    {
        for(uint8_t i = 0; i < rightSize; i++)
        {

            if( rightAnswer[i] != answerArr[i] )
            {
                testCondition = false;
            }
        }
    }
	else
	{
		testCondition = false;
	}
    TEST_ASSERT_TRUE(testCondition)
}

void test_overThreshold_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = SIZE_TEST;
    const uint8_t rightAnswer[SIZE_TEST] = { 0, 1, 2, 3, 4, 5, 6, 7};
    float targetArr[SIZE_TEST] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};
    uint8_t K = 110;
    uint8_t answerArr[rightSize];
    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, SIZE_TEST, K);
    if( answerSize == rightSize)
    {
        for(uint8_t i = 0; i < rightSize; i++)
        {
            if( rightAnswer[i] != answerArr[i] )
            {
                testCondition = false;
            }
        }
    }
	else
	{
		testCondition = false;
	}
    TEST_ASSERT_TRUE(testCondition)
}

void test_overSize_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 0;
    float targetArr[SIZE_TEST] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};
    uint8_t K = 10;
    uint8_t answerArr[1];
    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 9, K);
	TEST_ASSERT_TRUE(rightSize == answerSize)
}

void test_underSize_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 0;
    float targetArr[SIZE_TEST] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};
    uint8_t K = 10;
    uint8_t answerArr[1];
	uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 1, K);
	TEST_ASSERT_TRUE(rightSize == answerSize)
}

void test_nullTargerPointer_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 0;
    float targetArr[SIZE_TEST] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};
    uint8_t K = 10;
    uint8_t *answerArr = 0;
	uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);
	TEST_ASSERT_TRUE(rightSize == answerSize)
}

void test_nullAnswerPointer_searchIndexMaxWThreshold( void ){

    bool testCondition = true;
    const uint8_t rightSize = 0;
    const uint8_t rightAnswer[1] = {0};
	float *targetArr = 0;
    uint8_t K = 10;
    uint8_t answerArr[1];
	uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);
	TEST_ASSERT_TRUE(rightSize == answerSize)
}
