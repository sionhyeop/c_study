#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double getAverage(double data[], int size);
double getStd(double mean, double data[], int size);

int main()
{
    double data[10];
    const int length = sizeof(data) / sizeof(data[0]);

    srand(time(NULL));

    //data 생성
    for (int i = 0; i < 10; i++)
    {
        data[i] = rand();
        printf("데이터를 입력하시오: %d\n", (int)data[i]);
    }

    double mean = getAverage(data, length);
    double sigma = getStd(mean, data, length);

    printf("평균값은 %lf입니다.\n", mean);
    printf("표준편차값은 %lf입니다.\n", sigma);
    return 0;
}

double getAverage(double data[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return sum / size;
}

double getStd(double mean, double data[], int size)
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += (data[i] - mean) * (data[i] - mean);
    }
    return sum / size;
}