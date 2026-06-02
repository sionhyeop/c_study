#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int freq[10] = {
        0,
    };
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        freq[rand() % 10]++;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > freq[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("가장 많이 나온 수 = %d\n", maxDigit);
    return 0;
}