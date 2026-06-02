#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isGwangsu(int n)
{
    return (n % 9) == 3 ? 1 : 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (isGwangsu(num))
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
