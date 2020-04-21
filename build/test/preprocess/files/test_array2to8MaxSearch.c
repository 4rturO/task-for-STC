#include "build/temp/_test_array2to8MaxSearch.c"
#include "src/array2to8MaxSearch.h"
#include "C:/tools/ruby27/lib/ruby/gems/2.7.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_posArray_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 3;

    const uint8_t rightAnswer[3] = { 0, 6, 7};

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    uint8_t K = 10;

    uint8_t answerArr[rightSize];

    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

    if( answerSize == rightSize)

    {

        for(uint8_t i = 0; i < rightSize; i++)

        {

            if( rightAnswer[i] != answerArr[i] )

            {

                testCondition = 

                               0

                                    ;

            }

        }

    }

 else

 {

  testCondition = 

                 0

                      ;

 }

    if ((testCondition)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(38)));}

}



void test_nullArray_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 8;

    const uint8_t rightAnswer[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

    float targetArr[8] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    uint8_t K = 10;

    uint8_t answerArr[rightSize];

    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

    if( answerSize == rightSize)

    {

        for(uint8_t i = 0; i < rightSize; i++)

        {



            if( rightAnswer[i] != answerArr[i] )

            {

                testCondition = 

                               0

                                    ;

            }

        }

    }

 else

 {

  testCondition = 

                 0

                      ;

 }

    if ((testCondition)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(65)));}

}



void test_overThreshold_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 8;

    const uint8_t rightAnswer[8] = { 0, 1, 2, 3, 4, 5, 6, 7};

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    uint8_t K = 110;

    uint8_t answerArr[rightSize];

    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

    if( answerSize == rightSize)

    {

        for(uint8_t i = 0; i < rightSize; i++)

        {

            if( rightAnswer[i] != answerArr[i] )

            {

                testCondition = 

                               0

                                    ;

            }

        }

    }

 else

 {

  testCondition = 

                 0

                      ;

 }

    if ((testCondition)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(91)));}

}



void test_overSize_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 0;

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    uint8_t K = 10;

    uint8_t answerArr[1];

    uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 9, K);

 if ((rightSize == answerSize)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(102)));}

}



void test_underSize_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 0;

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    uint8_t K = 10;

    uint8_t answerArr[1];

 uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 1, K);

 if ((rightSize == answerSize)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(113)));}

}



void test_nullTargerPointer_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 0;

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    uint8_t K = 10;

    uint8_t *answerArr = 0;

 uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

 if ((rightSize == answerSize)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(124)));}

}



void test_nullAnswerPointer_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        1

                            ;

    const uint8_t rightSize = 0;

    const uint8_t rightAnswer[1] = {0};

 float *targetArr = 0;

    uint8_t K = 10;

    uint8_t answerArr[1];

 uint8_t answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

 if ((rightSize == answerSize)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(136)));}

}
