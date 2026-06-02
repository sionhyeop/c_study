#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_copy(int a[], int b[], int size);

int main()
{
    int a[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[10];
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    array_copy(a, b, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

void array_copy(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
}