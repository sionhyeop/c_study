#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_harmonic_sum(int n);

int main()
{
    printf("%lf\n", get_harmonic_sum(10));
    return 0;
}

double get_harmonic_sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return (1.0 / n) + get_harmonic_sum(n - 1);
}