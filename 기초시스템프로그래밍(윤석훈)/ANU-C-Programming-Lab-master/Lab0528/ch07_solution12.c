#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &n);

    int currentTerm = 0;
    int nextTerm = 1;
    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", currentTerm);

        int temp = currentTerm + nextTerm;
        currentTerm = nextTerm;
        nextTerm = temp;
    }

    putchar('\n');
    return 0;
}
