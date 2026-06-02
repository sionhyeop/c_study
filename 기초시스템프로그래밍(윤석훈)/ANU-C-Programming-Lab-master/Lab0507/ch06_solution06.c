#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const char *monthName[] =
        {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int month;

    printf("월번호를 입력하시오: ");
    scanf("%d", &month);

    printf("%s\n", monthName[month]);
    return 0;
}