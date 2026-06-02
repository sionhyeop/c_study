#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[3][5] =
        {{12, 56, 32, 16, 98},
        {99, 56, 34, 41, 3},
        {65, 3, 87, 78, 21}};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("%d행의 합계: %d\n", i, sum);
    }

    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        printf("%d열의 합계: %d\n", j, sum);
    }

    return 0;
}