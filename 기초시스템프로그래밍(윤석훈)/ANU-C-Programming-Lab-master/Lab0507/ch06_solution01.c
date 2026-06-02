#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    printf("문자를 입력하시오: ");
    ch = getchar();

    switch (ch)
    {
    case 'a':
    // fallthrough
    case 'e':
    // fallthrough
    case 'i':
    // fallthrough
    case 'o':
    // fallthrough
    case 'u':
        printf("모음입니다.\n");
        break;

    default:
        printf("자음입니다.\n");
        break;
    }

    return 0;
}