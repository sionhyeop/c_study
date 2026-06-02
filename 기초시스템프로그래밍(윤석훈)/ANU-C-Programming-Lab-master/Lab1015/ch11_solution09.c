#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search(int *arr, int size, int target_value);

int main(void)
{
    int A[5] = {100, 200, 50, 700, 400};
    const int A_size = sizeof(A) / sizeof(A[0]);

    int target_value = 200;
    int target_index = search(A, A_size, target_value);

    printf("월급이 %d만원인 사람의 인덱스 = %d\n", target_value, target_index);
    return 0;
}

int search(int *arr, int size, int target_value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target_value)
        {
            return i;
        }
    }

    return -1;
}