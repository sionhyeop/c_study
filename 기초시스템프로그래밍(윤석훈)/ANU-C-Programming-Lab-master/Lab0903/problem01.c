/**
 * 학과 거북이가 35마리 있고,
 * 다리 수를 세어보니 모두 94개이다.
 * 학과 거북이는 각각 몇 마리가 있는가?
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num_total;
    int num_total_leg;

    printf("개체수를 입력하세요: ");
    scanf("%d", &num_total);

    printf("총 다리수를 입력하세요: ");
    scanf("%d", &num_total_leg);

    int num_crane = ((4 * num_total) - num_total_leg) / 2;
    int num_turtle = num_total - num_crane;

    printf("거북이: %d, 학: %d\n", num_turtle, num_crane);
    return 0;
}