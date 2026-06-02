#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int get_random();

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", get_random());
    }
    
    return 0;
}

int get_random()
{
    static bool bInitialized = false;

    if (bInitialized == false)
    {
        srand(time(NULL));
        bInitialized = true;
        printf("초기화 실행\n");
    }

    return rand();
}
