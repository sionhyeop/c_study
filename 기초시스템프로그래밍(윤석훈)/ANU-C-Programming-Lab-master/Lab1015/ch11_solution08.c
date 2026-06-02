#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_array_sum(int *arr, int size);

void print_array(int *arr, int size);

int main(void)
{
    int A[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    const int A_size = sizeof(A) / sizeof(A[0]);
    int total_income = get_array_sum(A, A_size);

    print_array(A, A_size);
    printf("월급의 합 = %d\n", total_income);
    return 0;
}

int get_array_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
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