#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("n의 값: ");
    scanf("%d", &n);

    int r;
    printf("r의 값: ");
    scanf("%d", &r);

    int perm = 1;
    for (int i = n; i >= n - r + 1; i--)
    {
        perm *= i;
    }

    printf("순열의 값은 %d입니다.\n", perm);
    return 0;
}