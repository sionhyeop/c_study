#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LENGTH (30)

int get_punc_count(const char *str);

int main(void)
{
    char str[LENGTH];

    printf("문자열을 입력하시오: ");
    gets_s(str, LENGTH);

    printf("구두점의 갯수는 %d입니다.\n", get_punc_count(str));
    return 0;
}

int get_punc_count(const char *str)
{
    int punc_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case '.':
            /* intentional fallthrough */
        case ',':
            punc_count++;
            break;
        default:
            break;
        }
    }
    
    return punc_count;
}