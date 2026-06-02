#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x;
    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    double y;
    if (x > 0)
    {
        y = 7 * x + 2;
    }
    else
    {
        y = x * x - 9 * x + 2;
    }

    printf("f(x)의 값은 %lf\n", y);
    return 0;
}