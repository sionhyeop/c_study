#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit(int number);

int main()
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    printf("자리수의 갯수: %d\n", get_digit(n));
    return 0;
}

int get_digit(int number)
{
    if (number == 0)
    {
        return 1;
    }

    return (number / 10 > 0) + get_digit(number / 10);
}