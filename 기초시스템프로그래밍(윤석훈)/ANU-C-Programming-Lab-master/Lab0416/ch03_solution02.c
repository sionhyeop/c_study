#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double mile;

    printf("마일을 입력하시오: ");
    scanf("%lf", &mile);

    double meter = mile * 1609;

    printf("%.1lf마일은 %lf미터입니다.\n", mile, meter);
    return 0;
}