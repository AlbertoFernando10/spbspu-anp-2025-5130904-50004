#include "fernando.h"

namespace fernando
{
    size_t maxEqualSequence(int sequence[], size_t size)
    {
        if (size == 0) return 0;
        
        size_t maxCount = 1;
        size_t currentCount = 1;
        
        for (size_t i = 1; i < size; ++i)
        {
            if (sequence[i] == sequence[i - 1])
            {
                ++currentCount;
                if (currentCount > maxCount)
                {
                    maxCount = currentCount;
                }
            }
            else
            {
                currentCount = 1;
            }
        }
        
        return maxCount;
    }
    
    size_t maxIncreasingFragment(int sequence[], size_t size)
    {
        if (size == 0) return 0;
        
        size_t maxLength = 1;
        size_t currentLength = 1;
        
        for (size_t i = 1; i < size; ++i)
        {
            if (sequence[i] > sequence[i - 1])
            {
                ++currentLength;
                if (currentLength > maxLength)
                {
                    maxLength = currentLength;
                }
            }
            else
            {
                currentLength = 1;
            }
        }
        
        return maxLength;
    }
}
