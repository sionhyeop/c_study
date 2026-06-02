#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE (5)

void pr_str_array(char **dp)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\n", dp[i]);
    }
}

int main(void)
{
    char *str[SIZE] =
        {
            "A bad shearer never had a good sickle.",
            "A bad workman (always) blames his tools.",
            "A bad workman quarrels with his tools.",
            "A bad thing never dies.",
            "A bad workman finds fault with his tools."
        };

    pr_str_array(str);
    return 0;
}