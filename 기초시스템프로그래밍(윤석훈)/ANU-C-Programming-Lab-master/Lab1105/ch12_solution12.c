#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (20)

void str_upper(char *str);

int main(void)
{
    const char *space = " ";

    char name[LENGTH];
    printf("성과 이름을 대문자로 입력하시오: ");
    gets_s(name, LENGTH);

    char *lastName = strtok(name, space);
    str_upper(lastName);
    char *firstName = strtok(NULL, space);
    str_upper(firstName);

    printf("%s, %s\n", firstName, lastName);
    return 0;
}

void str_upper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
    }
}