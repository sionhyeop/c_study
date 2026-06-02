/**
 * 100만원으로 재테크를 시작하여 1년에 20%의 수익을 얻는다면,
 * 복리로 몇 년 만에 원금의 10배가 되는 적립금을 받게 되는지를
 * 계산하는 프로그램을 만들어 보자.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const double rate = 0.2;
    const int current_val = 1000000;

    int expected_val = current_val;
    int yearCount = 0;

    while (expected_val < (current_val * 10))
    {
        expected_val *= (1 + rate);
        yearCount++;
        printf("%4d년 후: %d\n", yearCount, expected_val);
    }

    printf("%d년 후에 원금의 10배 이상이 됩니다.\n", yearCount);
    return 0;
}