#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10][3];

    for (int i = 0; i < 10; ++i)
    {
        arr[i][0] = i + 1;
    }

    for (int i = 0; i < 10; ++i)
    {
        arr[i][1] = arr[i][0] * arr[i][0];
    }

    for (int i = 0; i < 10; ++i)
    {
        arr[i][2] = arr[i][0] * arr[i][1];
    }

    int numToFind;
    printf("정수를 입력하시오: ");
    scanf("%d", &numToFind);

    for (int i = 0; i < 10; i++)
    {
        if (numToFind == arr[i][2])
        {
            printf("%d의 세제곱근은 %d\n", numToFind, arr[i][0]);
            return 0;
        }
    }

    return 0;
}