#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_two_integers(int *out_x, int *out_y);

int main(void)
{
    int a, b;
    get_two_integers(&a, &b);

    int sum = a + b;
    printf("정수의 합은 %d\n", sum);
    return 0;
}

void get_two_integers(int *out_x, int *out_y)
{
    printf("두 개의 정수를 입력하시오(ex. 10 20): ");
    scanf("%d %d", out_x, out_y);
}