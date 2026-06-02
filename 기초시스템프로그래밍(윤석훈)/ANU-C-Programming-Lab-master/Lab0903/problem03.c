/**
 * 빈 우유병 3개를 가져오면 새 우유 1병과 바꿔주는 고개 행사 동안에,
 * 현금 24300원을 가지고 있는 길동이는 한 병에 300원인 우유를
 * 모두 몇 병이나 마실 수 있을까요?
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int balance = 24300;

    // 총 마신 우유병 수
    int drinkedMilkCount;
    int num_current_bottle;

    num_current_bottle = drinkedMilkCount = balance / 300;

    while (num_current_bottle / 3 != 0)
    {
        //현재 가진 병의 수에 기반해 교환한 우유병의 수
        int num_changed_bottle = num_current_bottle / 3;

        drinkedMilkCount += num_changed_bottle;
        num_current_bottle = (num_current_bottle % 3) + num_changed_bottle;
    }

    printf("총 마신 우유의 갯수는 %d개 입니다.\n", drinkedMilkCount);
    return 0;
}