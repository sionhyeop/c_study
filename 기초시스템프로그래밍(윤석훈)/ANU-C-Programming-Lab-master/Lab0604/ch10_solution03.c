#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main()
{
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int length = sizeof(a) / sizeof(a[0]);

    if (array_equal(a, b, length))
    {
        printf("2개의 배열은 같음.\n");
    }
    else
    {
        printf("2개의 배열은 다름.\n");
    }

    return 0;
}

int array_equal(int a[], int b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}