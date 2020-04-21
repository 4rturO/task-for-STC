#include <stdio.h>
#include <stdbool.h>
#include "array2to8MaxSearch.h"

//Search for the maximum value in the array
//Array size from 2 to 8
//In case of an error input errors returns zero
    //In: targetArr - pointer to array to search
    //In: answerArr - pointer to answer array
    //In: size - size of target array
    //In: threshold - deviation from the maximum
    //Out: size of answer array
uint8_t searchIndexMaxWThreshold( const float *targetArr,
        uint8_t *answerArr, const uint8_t size, uint8_t threshold )
{

    //Check size and zero pointer
    if( (size > 8) || (size < 2) || (answerArr == 0) || (targetArr == 0) )
    {
        return 0;
    }

    uint8_t answer = 0; //answerArr size
    //Case with maximum threshold
    if( threshold >= 100 )
    {
        for(uint8_t i = 0; i < size; i++)
        {
            answerArr[answer++] = i;
        }
        return answer;
    }

    //Find maximum
    float max = targetArr[0];
    for(uint8_t i = 0; i < size; i++)
    {
        if( targetArr[i] > max )
        {
            max = *(targetArr+i);
        }
    }

    //Record indexes
    for(uint8_t i = 0; i < size; i++)
    {
        if( targetArr[i] >= (max-max*(float)threshold/100.0))
        {
            answerArr[answer++] = i;
        }
    }
    return answer;
}
