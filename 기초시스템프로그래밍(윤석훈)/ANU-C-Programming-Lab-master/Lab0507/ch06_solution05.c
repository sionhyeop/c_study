#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int HEIGHT_THRESHOLD = 140;
    const int AGE_THRESHOLD = 10;

    int height;
    printf("키를 입력하시오(cm): ");
    scanf("%d", &height);

    int age;
    printf("나이를 입력하시오: ");
    scanf("%d", &age);

    if (height >= HEIGHT_THRESHOLD && age >= AGE_THRESHOLD)
    {
        printf("타도 좋습니다.\n");
    }
    else
    {
        printf("죄송합니다.\n");
    }

    return 0;
}