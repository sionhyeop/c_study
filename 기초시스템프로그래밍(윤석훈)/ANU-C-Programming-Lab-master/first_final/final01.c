#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int minPerDay = 1440;        //60진법 시계에서 하루는 1440분
    const int decimalMinPerDay = 2000; //10진법 시계에서 하루는 2000분

    int hour;
    int min;
    scanf("%d %d", &hour, &min);

    //60진법 시계에서 흐른 시간을 분으로 변환
    int time = 60 * hour + min;

    //60진법 체계의 분을 10진법 체계의 분으로 변환
    time = time * decimalMinPerDay / minPerDay;

    //10진법 시계에서 흐른 시간을 구했으므로, 시각을 구할 수 있다.
    printf("%d %d\n", time / 100, time % 100);
    return 0;
}
