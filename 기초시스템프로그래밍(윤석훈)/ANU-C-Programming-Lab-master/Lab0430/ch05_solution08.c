#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const double PI = 3.141592;

    double radius;
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    printf("표면적은 %lf입니다.\n", 4 * PI * radius * radius);
    printf("체적은 %lf입니다.\n", 4.0 / 3 * PI * radius * radius * radius);
    return 0;
}