#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE (10)

void copy_array(int *src, int *dest, int size);
void print_array(int *arr, int size);

int main(void)
{
    int A[ARRAY_SIZE] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int B[ARRAY_SIZE];

    copy_array(A, B, ARRAY_SIZE);

    print_array(A, ARRAY_SIZE);
    print_array(B, ARRAY_SIZE);
    return 0;
}

void copy_array(int *src, int *dest, int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}

void print_array(int *arr, int size)
{
    printf("A[] = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}