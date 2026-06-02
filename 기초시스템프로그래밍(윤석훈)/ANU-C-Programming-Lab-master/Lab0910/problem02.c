/**
 * 주어진 정수가 소수인지를 검사하는 함수 isPrime()을 작성하고,
 * 이 함수를 이용하여 2부터 100 사이의
 * 모든 소수를 출력하는 프로그램을 작성하시오.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// n이 소수일 경우 1 반환, 아니면 0 반환
int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    putchar('\n');
    return 0;
}