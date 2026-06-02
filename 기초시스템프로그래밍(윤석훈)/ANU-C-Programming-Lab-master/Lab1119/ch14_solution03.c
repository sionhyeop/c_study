#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_STUDENT (3)
#define NUM_TEST (4)

double get_average(const int list[], int n);

int main(void)
{
    int scores[NUM_STUDENT][NUM_TEST] =
        {
            {100, 90, 89, 60},
            {95, 87, 56, 96},
            {75, 94, 85, 45}};

    for (int i = 0; i < NUM_STUDENT; i++)
    {
        printf("%d행의 평균값 = %.2lf\n", i, get_average(scores[i], NUM_TEST));
    }

    return 0;
}

double get_average(const int list[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += list[i];
    }
    return (double)sum / n;
}