#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main(void)
{
    int a = 100;
    int b = 200;

    int sum;
    int diff;

    get_sum_diff(a, b, &sum, &diff);

    printf("원소들의 합: %d\n", sum);
    printf("원소들의 차: %d\n", diff);
    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
    return;
}