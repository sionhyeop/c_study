/**
 * 1부터 100까지의 정수 중에서 3의 배수인 정수를 차례로 더하되,
 * 그 합이 250을 처음으로 넘는 순간까지만 더한 합을 구하는
 * 프로그램을 작성해 보라.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int limit = 250;

    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            printf("%3d: %4d\n", i, sum);
        }
        if (sum > limit)
        {
            break;
        }
    }

    printf("결과 값은 %d입니다.\n", sum);
    return 0;
}