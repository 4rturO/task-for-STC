#include "build/temp/_test_calc.c"
#include "src/calc.h"
#include "C:/tools/ruby27/lib/ruby/gems/2.7.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_pos_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        0

                             ;

    const int rightSize = 3;

    const int rightAnswer[3] = { 0, 6, 7};

    float targetArr[8] = { 7.5, 2.2, 1.1, 3.6, 5.7, 5.3, 7.8, 8};

    int K = 10;

    int answerArr[rightSize];

    int answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

    if( answerSize == rightSize)

    {

        for(int i = 0; i < rightSize; i++)

        {

            if( rightAnswer[i] != answerArr[i] )

            {

                testCondition = 

                               0

                                    ;

            }

            testCondition = 

                           1

                               ;

        }

    }

    if ((testCondition)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(35)));}

}



void test_null_searchIndexMaxWThreshold( void ){



    

   _Bool 

        testCondition = 

                        0

                             ;

    const int rightSize = 8;

    const int rightAnswer[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

    float targetArr[8] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    int K = 10;

    int answerArr[rightSize];

    int answerSize = searchIndexMaxWThreshold(targetArr, answerArr, 8, K);

    if( answerSize == rightSize)

    {

        for(int i = 0; i < rightSize; i++)

        {



            if( rightAnswer[i] != answerArr[i] )

            {

                testCondition = 

                               0

                                    ;

            }

            testCondition = 

                           1

                               ;

        }

    }

    if ((testCondition)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(59)));}

}
