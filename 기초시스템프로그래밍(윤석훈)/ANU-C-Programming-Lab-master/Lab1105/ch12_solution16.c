#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (50)

void print_str_with_shift(const char *str, const int num_shift);

int main(void)
{
    char str[LENGTH];

    printf("광고하고 싶은 텍스트를 입력하시오: ");
    gets_s(str, LENGTH);

    printf("\n=============================\n");

    const int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        print_str_with_shift(str, i);
    }

    return 0;
}

void print_str_with_shift(const char *str, const int num_shift)
{
    const int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        int index = (i + num_shift) % length;
        putchar(str[index]);
    }
    putchar('\n');
}