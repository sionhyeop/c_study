/**
 * 두 개의 정수 n, m을 키보드로부터 입력받아서
 * n이 m의 배수이면 1을 반환하고,
 * 그렇지 않으면 0을 반환하는 함수 isMultiple(int n, int m)을
 * 작성하고 그 함수를 호출하여 테스트해 볼 수 있는 프로그램을 작성하시오.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isMultiple(int n, int m);

int main()
{
    int a;
    int b;
    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &a);
    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &b);

    if (isMultiple(a, b))
    {
        printf("%d는 %d의 배수입니다.\n", a, b);
    }
    else
    {
        printf("%d는 %d의 배수가 아닙니다.\n", a, b);
    }
    
    return 0;
}

int isMultiple(int n, int m)
{
    if (n % m == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}