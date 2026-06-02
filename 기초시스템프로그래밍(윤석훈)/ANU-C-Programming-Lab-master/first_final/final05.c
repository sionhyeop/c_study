#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int m;
    int n;
    int goalValue;
    scanf("%d %d %d", &m, &n, &goalValue);

    int count = 0;
    for (int i = 0; i < (m / n); i++)
    {
        for (int j = 0; j < (12000 / m); j++)
        {
            for (int k = 1; k <= n; k++)
            {
                int currentValue = (j * m) + (i * n) + k;
                count++;
                if (currentValue == goalValue)
                {
                    printf("%d\n", count);
                    return 0;
                }
            }
        }
    }

    return 0;
}