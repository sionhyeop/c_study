#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x;
    printf("X 좌표를 입력하시오: ");
    scanf("%lf", &x);

    double y;
    printf("Y 좌표를 입력하시오: ");
    scanf("%lf", &y);

    (x > 0 && y > 0) ? printf("1사분면\n")
    : (x < 0 && y > 0) ? printf("2사분면\n")
    : (x < 0 && y < 0) ? printf("3사분면\n")
    : (x > 0 && y < 0) ? printf("4사분면\n")
    : printf("");

    return 0;
}