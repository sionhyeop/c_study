#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;

    while (1)
    {
        printf("문자를 입력하시오: ");
        ch = getchar();
        getchar();

        if (ch == '.')
        {
            break;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 'a' - 'A';
            putchar(ch);
            putchar('\n');
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch += 'A' - 'a';
            putchar(ch);
            putchar('\n');
        }
        else
        {
            printf("Unknown alphabet\n");
        }
    }
    
    return 0;
}