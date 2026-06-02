#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const double CM_PER_INCH = 2.54;
    const int INCH_PER_FEET = 12;

    int heightInCm;
    printf("키를 입력하시오(cm): ");
    scanf("%d", &heightInCm);

    double heightInInch = heightInCm / CM_PER_INCH;
    int heightInFeet = heightInInch / INCH_PER_FEET;
    heightInInch -= heightInFeet * INCH_PER_FEET;

    printf("%dcm는 %d피트 %lf인치입니다.\n", heightInCm, heightInFeet, heightInInch);
    return 0;
}