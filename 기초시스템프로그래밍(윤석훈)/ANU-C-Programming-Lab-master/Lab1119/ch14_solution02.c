#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_sum(int arr[], int size);

int main()
{
    int arr[3][6] =
        {
            10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10};

    int row_sum[3];
    int total_sum = 0;

    const int ROW = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < ROW; i++)
    {
        row_sum[i] = get_sum(arr[i], 6);
        total_sum += row_sum[i];
    }

    printf("정수의 합=%d\n", total_sum);
    return 0;
}

int get_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}