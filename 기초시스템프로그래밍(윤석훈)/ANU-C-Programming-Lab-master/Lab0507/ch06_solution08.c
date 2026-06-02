#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int time;
    int age;
    printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
    scanf("%d %d", &time, &age);

    int fare;
    if (time >= 17)
    {
        fare = 10000;
    }
    else
    {
        if (age > 12 && age < 65)
        {
            fare = 34000;
        }
        else
        {
            fare = 25000;
        }
    }

    printf("요금은 %d원 입니다.\n", fare);
    return 0;
}