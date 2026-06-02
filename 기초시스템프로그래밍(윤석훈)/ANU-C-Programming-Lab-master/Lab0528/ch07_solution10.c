#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double r;
    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);

    int n;
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d", &n);

    double result = 1.0;
    for (int i = 0; i < n; i++)
    {
        result = result * r;
    }

    printf("결과값은 %lf\n", result);
    return 0;
}