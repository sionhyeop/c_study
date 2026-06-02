#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DIMENSION (3)

void vector_add(double x[], double y[], double out[]);
double vector_dot_prod(double x[], double y[]);

int main()
{
    double A[DIMENSION] = {5, 6, 7};
    double B[DIMENSION] = {2, 6, 4};
    double C[DIMENSION];

    vector_add(A, B, C);
    printf("벡터의 합 = [ %lf, %lf, %lf ]\n", C[0], C[1], C[2]);

    printf("벡터의 내적 = %lf\n", vector_dot_prod(A, B));
    return 0;
}

void vector_add(double x[], double y[], double out[])
{
    for (int i = 0; i < DIMENSION; i++)
    {
        out[i] = x[i] + y[i];
    }
}

double vector_dot_prod(double x[], double y[])
{
    double result = 0;

    for (int i = 0; i < DIMENSION; i++)
    {
        result += x[i] * y[i];
    }

    return result;
}