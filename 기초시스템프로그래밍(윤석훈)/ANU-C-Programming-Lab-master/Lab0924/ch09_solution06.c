#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
    int base;
    int exponent;

    printf("밑수: ");
    scanf("%d", &base);

    printf("지수: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    return 0;
}

int power(int base, int power_raised)
{
    if (power_raised == 0)
    {
        return 1;
    }

    return base * power(base, power_raised - 1);
}