#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double fah;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &fah);

    double cel = (5.0 / 9) * (fah - 32);
    printf("섭씨값은 %lf도입니다.\n", cel);
    return 0;
}