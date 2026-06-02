#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    printf("계산값은 %d입니다.\n", sum);
    return 0;
}