#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NATION 1

int main(void)
{
#if NATION == 1
    printf("안녕하세요?\n");
#elif NATION == 2
    printf("你好吗?\n");
#else
    printf("Hello World!\n");
#endif
    return 0;
}
