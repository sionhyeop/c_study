#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    int y;
    printf("정수를 입력하시오: ");
    scanf("%d", &y);

    x % y == 0 ? printf("약수입니다.\n") : printf("약수가 아닙니다.\n");

    return 0;
}