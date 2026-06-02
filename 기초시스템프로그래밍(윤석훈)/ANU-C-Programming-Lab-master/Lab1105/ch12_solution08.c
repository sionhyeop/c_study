#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (50)

int count_word(const char *str);

int main(void)
{
    char str[LENGTH];
    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    int count = count_word(str);
    printf("단어의 수는 %d입니다.\n", count);
    return 0;
}

int count_word(const char *str)
{
    const char *space = " ";

    int result = 0;
    char *token;

    char copy_str[LENGTH];
    strcpy(copy_str, str);

    token = strtok(copy_str, space);

    while (token != NULL)
    {
        result++;
        token = strtok(NULL, space);
    }

    return result;
}