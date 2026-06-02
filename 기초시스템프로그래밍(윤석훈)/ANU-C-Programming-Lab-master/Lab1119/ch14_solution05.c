#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void set_max_ptr(int m[], int size, int **p_max);

int main(void)
{
    int m[6] = {5, 6, 1, 3, 7, 9};
    int *p_max = NULL;

    set_max_ptr(m, 6, &p_max);
    printf("최댓값: %d, 주소: %p", *p_max, p_max);
    return 0;
}

void set_max_ptr(int m[], int size, int **p_max)
{
    *p_max = m;
    for (int i = 1; i < size; i++)
    {
        if (m[i] > **p_max)
        {
            *p_max = &m[i];
        }
    }
}