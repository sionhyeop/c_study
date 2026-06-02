#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE (5)

void array_fill(int *A, int size);
void print_array(int *arr, int size);

int main(void)
{
    int arr[ARRAY_SIZE];

    array_fill(arr, ARRAY_SIZE);
    print_array(arr, ARRAY_SIZE);
    return 0;
}

void array_fill(int *A, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        A[i] = rand();
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}
