#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum mangoType
{
    A,
    B,
    C,
    D
};

int main()
{
    double weight[4];
    int rank[4];

    //입력 받기
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &weight[i]);
    }

    //A와 B 비교
    if (weight[A] > weight[B])
    {
        rank[0] = A;
        rank[1] = B;
    }
    else
    {
        rank[0] = B;
        rank[1] = A;
    }

    //C와 D 비교
    if (weight[C] > weight[D])
    {
        rank[2] = C;
        rank[3] = D;
    }
    else
    {
        rank[2] = D;
        rank[3] = C;
    }

    //최대값 찾기
    if (weight[rank[2]] > weight[rank[0]])
    {
        int temp = rank[0];
        rank[0] = rank[2];
        rank[2] = temp;
    }

    //최소값 찾기
    if (weight[rank[3]] > weight[rank[1]])
    {
        int temp = rank[3];
        rank[3] = rank[1];
        rank[1] = temp;
    }

    //이외 값 비교
    if (weight[rank[2]] > weight[rank[1]])
    {
        int temp = rank[2];
        rank[2] = rank[1];
        rank[1] = temp;
    }

    //출력
    for (int i = 0; i < 4; i++)
    {
        printf("%c ", 'A' + rank[i]);
    }

    printf("\n");
    return 0;
}