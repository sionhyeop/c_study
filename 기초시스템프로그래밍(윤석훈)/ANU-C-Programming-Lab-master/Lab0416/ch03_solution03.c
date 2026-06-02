#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double base;
    double height;

    printf("삼각형의 밑변: ");
    scanf("%lf", &base);

    printf("삼각형의 높이: ");
    scanf("%lf", &height);

    double area = base * height / 2;
    printf("삼각형의 넓이: %lf\n", area);

    return 0;
}