#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE (4)

void merge_array(int *a, int *b, int *out_c, int size);

void print_array(int *arr, int size);

int main(void)
{
    int A[ARRAY_SIZE] = {2, 5, 7, 8};
    int B[ARRAY_SIZE] = {1, 3, 4, 6};
    int *C = malloc(sizeof(int) * (ARRAY_SIZE * 2));

    merge_array(A, B, C, ARRAY_SIZE);

    printf("A[] = ");
    print_array(A, ARRAY_SIZE);

    printf("B[] = ");
    print_array(B, ARRAY_SIZE);

    printf("C[] = ");
    print_array(C, ARRAY_SIZE * 2);

    return 0;
}

void merge_array(int *a, int *b, int *out_c, int size)
{
    int index_a = 0;
    int index_b = 0;
    int index_c;

    while (index_a < size && index_b < size)
    {
        index_c = index_a + index_b;
        if (a[index_a] < b[index_b])
        {
            out_c[index_c] = a[index_a];
            index_a++;
        }
        else
        {
            out_c[index_c] = b[index_b];
            index_b++;
        }
    }

    if (index_a == size)
    {
        for (; index_b < size; index_b++)
        {
            index_c = index_a + index_b;
            out_c[index_c] = b[index_b];
        }
    }
    else if (index_b == size)
    {
        for (; index_a < size; index_a++)
        {
            index_c = index_a + index_b;
            out_c[index_c] = a[index_a];
        }
    }
    else
    {
        assert(0);
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