#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "student.h"

int main(void)
{
    struct STUDENT s;

    s.number = 1;
    strcpy(s.name, "홍길동");
    printf("학번: %d, 이름: %s\n", s.number, s.name);
    return 0;
}
