#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double height;
    double weight;

    printf("키와 체중을 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    double properWeight = (height - 100) * 0.9;

    if (weight > properWeight)
    {
        printf("과체중입니다.\n");
    }
    else if (weight < properWeight)
    {
        printf("저체중입니다.\n");
    }
    else
    {
        printf("정상입니다.\n");
    }

    return 0;
}