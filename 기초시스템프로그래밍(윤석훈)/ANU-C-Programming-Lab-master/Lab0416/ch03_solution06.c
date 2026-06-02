#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weightOnEarth;
    printf("몸무게를 입력하세요(단위: kg): ");
    scanf("%lf", &weightOnEarth);

    double weightOnMoon = weightOnEarth * 0.17;
    printf("달에서의 몸무게는 %lfkg입니다.\n", weightOnMoon);

    return 0;
}