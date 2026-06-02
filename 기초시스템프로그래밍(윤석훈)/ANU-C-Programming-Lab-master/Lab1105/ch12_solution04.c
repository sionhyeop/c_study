#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ALPHABET (26)

int str_chr(const char *str, const char ch);

int main(void)
{
    char str[30];
    int count[NUM_ALPHABET] = {
        0,
    };

    printf("문자열을 입력하시오: ");
    gets_s(str, 30);

    for (int i = 0; i < NUM_ALPHABET; i++)
    {
        count[i] = str_chr(str, 'a' + i);
        printf("%c: %d\n", 'a' + i, count[i]);
    }

    return 0;
}

int str_chr(const char *str, const char ch)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            result++;
        }
    }

    return result;
}