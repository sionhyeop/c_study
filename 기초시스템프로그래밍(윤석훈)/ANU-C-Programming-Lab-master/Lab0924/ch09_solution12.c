#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n);

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("fib(%d) = %d\n", i, fib(i));
    }

    return 0;
}

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}