#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LENGTH (50)

bool is_palindrome(const char *str);

int main(void)
{
    char str[LENGTH];

    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    if (is_palindrome(str))
    {
        printf("회문입니다.\n");
    }
    else
    {
        printf("회문이 아닙니다.\n");
    }

    return 0;
}

bool is_palindrome(const char *str)
{
    const int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        char front = toupper(str[i]);
        char back = toupper(str[length - 1 - i]);

        if (front != back)
        {
            return false;
        }
    }
    
    return true;
}