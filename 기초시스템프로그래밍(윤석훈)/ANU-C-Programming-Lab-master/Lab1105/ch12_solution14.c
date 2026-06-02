#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (80)

void replace(char *str, const char *old_substr, const char *new_substr);

int main(void)
{
    char str[LENGTH];
    char old_substr[LENGTH];
    char new_substr[LENGTH];

    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    printf("찾을 문자열: ");
    gets_s(old_substr, LENGTH);

    printf("바꿀 문자열: ");
    gets_s(new_substr, LENGTH);

    replace(str, old_substr, new_substr);
    printf("수정된 문자열: %s\n", str);
    return 0;
}

void replace(char *str, const char *old_substr, const char *new_substr)
{
    char buffer[LENGTH] = "";

    const char *space = " ";
    char *token;
    token = strtok(str, space);

    while (token != NULL)
    {
        if (strcmp(old_substr, token) == 0)
        {
            strcat(buffer, new_substr);
            strcat(buffer, space);
        }
        else
        {
            strcat(buffer, token);
            strcat(buffer, space);
        }
        token = strtok(NULL, space);
    }
    buffer[strlen(buffer) - 1] = '\0';
    strcpy(str, buffer);
}