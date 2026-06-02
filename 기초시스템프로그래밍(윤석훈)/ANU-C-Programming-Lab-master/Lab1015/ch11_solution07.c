#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE (10)

void try_array_add(int *a, int *b, int *out_c, int size);
void print_array(int *arr, int size);

int main(void)
{
    int A[ARRAY_SIZE] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int B[ARRAY_SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int C[ARRAY_SIZE];

    try_array_add(A, B, C, ARRAY_SIZE);

    printf("A[] = ");
    print_array(A, ARRAY_SIZE);

    printf("B[] = ");
    print_array(B, ARRAY_SIZE);

    printf("C[] = ");
    print_array(C, ARRAY_SIZE);

    return 0;
}

void try_array_add(int *a, int *b, int *out_c, int size)
{
    for (int i = 0; i < size; i++)
    {
        out_c[i] = a[i] + b[i];
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}