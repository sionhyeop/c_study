#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (20)

void fix_str(char *str);

int main(void)
{
    char str[LENGTH];

    printf("텍스트를 입력하시오: ");
    gets_s(str, LENGTH);

    fix_str(str);
    printf("수정된 텍스트: %s\n", str);
    return 0;
}

void fix_str(char *str)
{
    if (!(str[0] >= 'A' && str[0] <= 'Z'))
    {
        str[0] += 'A' - 'a';
    }

    const int length = strlen(str);
    if (str[length] != '.')
    {
        str[length] = '.';
        str[length + 1] = '\0';
    }
}