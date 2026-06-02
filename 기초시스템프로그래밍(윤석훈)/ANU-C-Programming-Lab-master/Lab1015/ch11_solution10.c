#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x, int y, int *out_lcm, int *out_gcd);

int main(void)
{
    int num1;
    int num2;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    int lcm;
    int gcd;
    get_lcm_gcd(num1, num2, &lcm, &gcd);

    printf("최소공배수는 %d입니다.\n", lcm);
    printf("최대공약수는 %d입니다.\n", gcd);
    return 0;
}

void get_lcm_gcd(int x, int y, int *out_lcm, int *out_gcd)
{
    if (x < y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    int copied_x = x;
    int copied_y = y;
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    *out_gcd = x;
    *out_lcm = copied_x * copied_y / (*out_gcd);
    return;
}