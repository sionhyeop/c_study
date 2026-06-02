#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    int smaller = x < y ? x : y;
    smaller = z < smaller ? z : smaller;

    printf("제일 작은 정수는 %d입니다.\n", smaller);
    return 0;
}