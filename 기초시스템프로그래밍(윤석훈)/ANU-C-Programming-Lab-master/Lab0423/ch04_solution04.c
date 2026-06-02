#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double w;
    double h;
    double d;
    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &w, &h, &d);

    printf("상자의 부피는 %lf입니다\n", w * h * d);

    return 0;
}