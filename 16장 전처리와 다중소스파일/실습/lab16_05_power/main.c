#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "power.h"

int main(void)
{
    int x, y;

    printf("x의 값을 입력하시오: ");
    scanf("%d", &x);
    printf("y의 값을 입력하시오: ");
    scanf("%d", &y);
    printf("%d의 %d제곱은 %.2f입니다.\n", x, y, power(x, y));
    return 0;
}
