#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS (10)
#define NUM_EXAMS (3)

int main()
{
    int data[NUM_STUDENTS][NUM_EXAMS];
    srand(time(NULL));

    // 시험 점수 데이터 생성
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        for (int j = 0; j < NUM_EXAMS; j++)
        {
            data[i][j] = rand() % 101;
        }
    }

    for (int j = 0; j < NUM_EXAMS; j++)
    {
        int max = 0;
        int min = RAND_MAX;
        for (int i = 0; i < NUM_STUDENTS; i++)
        {
            if (data[i][j] > max)
            {
                max = data[i][j];
            }
            if (data[i][j] < min)
            {
                min = data[i][j];
            }
        }

        printf("시험 #%d의 최대점수 = %d\n", j, max);
        printf("시험 #%d의 최소점수 = %d\n", j, min);
    }

    return 0;
}