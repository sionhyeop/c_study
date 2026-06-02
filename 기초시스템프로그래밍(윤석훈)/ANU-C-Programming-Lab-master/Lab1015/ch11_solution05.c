#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE (10)

void convert_to_score(double *grades, double *out_scores, int size);

void print_double_array(double *arr, int arr_size);

int main(void)
{
    double grades[ARRAY_SIZE] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    double scores[ARRAY_SIZE];

    print_double_array(grades, ARRAY_SIZE);
    convert_to_score(grades, scores, ARRAY_SIZE);
    print_double_array(scores, ARRAY_SIZE);
    return 0;
}

void convert_to_score(double *grades, double *out_scores, int size)
{
    const double MAX_GRADE = 4.3;
    const int MAX_SCORE = 100;

    for (int i = 0; i < size; i++)
    {
        out_scores[i] = (MAX_SCORE / MAX_GRADE) * grades[i];
    }
}

void print_double_array(double *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%05.2f ", arr[i]);
    }
    printf("\n");
}