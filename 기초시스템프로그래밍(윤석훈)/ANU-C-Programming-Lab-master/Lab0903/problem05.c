/**
 * 도깨비 주머니가 있다. 주머니에 돈을 넣고, 도깨비 방망이로 '탁!' 한 번 치면, 주머니에 있는 돈이 몇 배가 되고,
 * 여기서 주머니 사용료를 제외한 금액이 남아있게 되는 그런 주머니다.
 * 이 도깨비 주머니로 필요한 돈을 마련해 보려고 한다.
 * 한 번 ‘탁’ 칠 때마다 사용료가 4000원인 주머니는 속에 담겨있는 돈을 5배로 불려 준다.
 * 도깨비 방망이를 두 번 두드려 필요한 돈 10000원을 얻기 위해서는 처음에 얼마를 준비하면 될까?
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int TARGET = 10000;
    const int FEE = 4000;
    const int HIT_COUNT = 2;

    int mul = 5;
    int money = TARGET;

    for (int i = 0; i < HIT_COUNT; i++)
    {
        money = (money + FEE) / mul;
    }

    printf("처음에 필요한 돈은 %d원 입니다.\n", money);
    return 0;
}