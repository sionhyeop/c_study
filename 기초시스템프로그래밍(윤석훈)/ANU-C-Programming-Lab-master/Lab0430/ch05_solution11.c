#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const double PI = 3.14;

    double distance;
    printf("거리를 입력하시오: ");
    scanf("%lf", &distance);

    double angle;
    printf("각도를 입력하시오: ");
    scanf("%lf", &angle);

    printf("지구의 반지름은 %lf\n", distance * 180 / (angle * PI));
    return 0;
}