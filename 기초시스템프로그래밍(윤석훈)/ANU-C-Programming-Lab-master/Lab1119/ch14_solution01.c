#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void set_proverb(char **str_p, int n);

int main(void)
{
    char *s;

    int n;
    printf("몇 번째 속담을 선택하시겠습니까? ");
    scanf("%d", &n);

    set_proverb(&s, n);
    printf(s);
    return 0;
}

void set_proverb(char **str_p, int n)
{
    static char *arr[10] =
        {
            "A bad shearer never had a good sickle.",
            "A bad workman blames his tools.",
            "A bad workman quarrels with his tools.",
            "A bad thing never dies."};

    *str_p = arr[n];
}