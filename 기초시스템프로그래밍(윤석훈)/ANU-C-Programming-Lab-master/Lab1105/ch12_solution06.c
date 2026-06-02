#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void str_upper(char *str);

int main(void)
{
    char str[20];
    printf("문자열을 입력하시오: ");
    scanf("%s", str);

    str_upper(str);

    printf("변환된 문자열: %s\n", str);
    return 0;
}

void str_upper(char *str)
{
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += 'A' - 'a';
        }
    }
}