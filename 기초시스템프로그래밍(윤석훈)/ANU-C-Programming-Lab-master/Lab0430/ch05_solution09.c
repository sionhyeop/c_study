#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double rodHeight;
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &rodHeight);

    double rodDistance;
    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%lf", &rodDistance);

    double pyramidDistance;
    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%lf", &pyramidDistance);

    double pyramidHeight = rodHeight * pyramidDistance / rodDistance;
    printf("피라미드까지의 높이는 %lf입니다.\n", pyramidHeight);

    return 0;
}