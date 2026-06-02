#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STRING_SIZE (20)

void delete_white_spaces(char *out_str);

int main(void)
{
    char str[STRING_SIZE];
    printf("공백 문자가 있는 문자를 입력하시오: ");

    gets_s(str, STRING_SIZE);

    delete_white_spaces(str);

    printf("공백이 제거된 문자열: %s", str);
    return 0;
}

void delete_white_spaces(char *out_str)
{
    const char *whiteSpace = " ";

    char tempString[STRING_SIZE] = "";
    char *token;

    token = strtok(out_str, whiteSpace);

    while (token != NULL)
    {
        strcat(tempString, token);
        token = strtok(NULL, whiteSpace);
    }

    strcpy(out_str, tempString);
}
