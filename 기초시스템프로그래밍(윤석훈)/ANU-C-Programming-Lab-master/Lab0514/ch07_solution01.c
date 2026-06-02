#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //Sleep() definition

int main()
{
    int n;

    printf("카운터의 초기값을 입력하시오: ");
    scanf("%d", &n);

    for (; n > 0; --n)
    {
        printf("%d ", n);
        Sleep(1000);
    }

    putchar('\a');
    return 0;
}