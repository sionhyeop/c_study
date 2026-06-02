/**
 * 1(startNum)부터 100(endNum)까지의 정수 중에서 3의 배수인 정수를 차례로 더하되,
 * 그 합이 200을 처음으로 넘는 수를 구하시오.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int limit = 200;

    int startNum;
    printf("startNum: ");
    scanf("%d", &startNum);

    int endNum;
    printf("endNum: ");
    scanf("%d", &endNum);

    int i;
    int sum = 0;
    int flag = 0;
    for (i = startNum; i <= endNum; ++i)
    {
        if (i % 3 != 0)
        {
            continue;
        }

        sum += i;
        printf("[%3d] %5d\n", i, sum);

        if (sum > limit)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("결과: %3d\n", i);
    }
    else
    {
        printf("결과: limit을 넘지 못함\n");
    }

    return 0;
}