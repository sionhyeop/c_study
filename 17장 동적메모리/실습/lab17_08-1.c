#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define AVG(a, b) (((a) + (b)) / 2.0)

int main(void)
{
    double a;
    double b;

    printf("실수 2개 입력: ");
    scanf("%lf %lf", &a, &b);

    printf("최소값: %f\n", MIN(a, b));
    printf("최대값: %f\n", MAX(a, b));
    printf("평균: %f\n", AVG(a, b));
    return 0;
}
