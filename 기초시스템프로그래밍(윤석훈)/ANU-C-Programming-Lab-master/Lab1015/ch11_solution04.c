#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_print(int *A, int size);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    array_print(arr, arr_size);
    return 0;
}

void array_print(int *A, int size)
{
    printf("A[] = { ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
}
