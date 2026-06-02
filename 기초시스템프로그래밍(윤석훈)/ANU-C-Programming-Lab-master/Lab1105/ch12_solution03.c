#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (20)

int str_chr(const char *str, const char ch);

int main(void)
{
    char str[LENGTH];
    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    char ch;
    printf("개수를 셀 문자를 입력하시오: ");
    scanf(" %c", &ch);

    int result = str_chr(str, ch);
    printf("%c의 갯수: %d\n", ch, result);
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