#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysLength = sizeof(days) / sizeof(days[0]);

    for (int i = 0; i < daysLength; i++)
    {
        printf("%2d월은 %d일까지 있습니다.\n", i + 1, days[i]);
    }

    return 0;
}