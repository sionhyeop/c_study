#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define LEN (10)

int main()
{
    int arr[LEN];

    int max = 0;
    int min = RAND_MAX;

    for (int i = 0; i < LEN; i++)
    {
        arr[i] = rand();
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("최댓값은 %d\n", max);
    printf("최솟값은 %d\n", min);

    return 0;
}