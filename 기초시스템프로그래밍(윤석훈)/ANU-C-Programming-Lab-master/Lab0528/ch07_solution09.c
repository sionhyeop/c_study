#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int LIMIT = 10000;

    int i = 0;
    int sum = 0;
    while (sum + i + 1 < LIMIT)
    {
        i++;
        sum += i;
    }
    printf("1부터 %d까지의 합이 %d입니다.\n", i, sum);
    return 0;
}
