#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (int i = 2; i < 100; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (j == i)
        {
            printf("%d ", j);
        }
    }

    putchar('\n');
    return 0;
}