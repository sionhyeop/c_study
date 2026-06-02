#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    while (1)
    {
        int length;
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &length);

        if (length == -1)
        {
            break;
        }

        for (int i = 0; i < length; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}