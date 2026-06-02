#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_response(const char *prompt);

int main(void)
{
    char prompt[20];
    printf("게임을 하시겠습니까? ");
    scanf("%s", prompt);

    int response = get_response(prompt);

    switch (response)
    {
    case 1:
        printf("긍정적인 답변\n");
        break;
    case 0:
        printf("부정적인 답변\n");
        break;
    default:
        printf("잘못된 입력\n");
        break;
    }

    return 0;
}

int get_response(const char *prompt)
{
    char temp[20];
    strcpy(temp, prompt);

    for (int i = 0; temp[i] != '\0'; i++)
    {
        temp[i] = tolower(temp[i]);
    }

    if (strcmp(temp, "yes") == 0)
    {
        return 1;
    }
    else if (strcmp(temp, "ok") == 0)
    {
        return 1;
    }
    else if (strcmp(temp, "no") == 0)
    {
        return 0;
    }

    return -1;
}