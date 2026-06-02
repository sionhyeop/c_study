#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (50)

void print_words_inversely(const char *str);

int main(void)
{
    char str[LENGTH];

    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    print_words_inversely(str);
    return 0;
}

void print_words_inversely(const char *str)
{
    const char *SPACE = " ";
    char *token[LENGTH];

    char copy_str[LENGTH];
    strcpy(copy_str, str);

    int i = 0;
    token[i] = strtok(copy_str, SPACE);
    while (token[i] != NULL)
    {
        i++;
        token[i] = strtok(NULL, SPACE);
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%s ", token[j]);
    }
    putchar('\n');
}