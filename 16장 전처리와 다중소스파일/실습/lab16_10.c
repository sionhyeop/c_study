#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    double a;
    double b;
    double c;
    double d;

    printf("실수 4개 입력: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    printf("최대값: %f\n", MAX(MAX(a, b), MAX(c, d)));
    return 0;
}
