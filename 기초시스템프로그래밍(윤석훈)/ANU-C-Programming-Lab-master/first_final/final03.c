#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum toyType
{
    TRAIN = 1,
    AIRPLANE = 2
};

int main()
{
    int numToys = 0; //만들어야 하는 기차와 비행기의 총 갯수
    int h, m, k, n;
    int time; //분 단위로 시간을 바꾸어 저장

    scanf("%d %d %d %d", &h, &m, &k, &n);

    //기차와 비행기에 따라 numToys를 다르게 계산
    switch (k)
    {
    case TRAIN:
        numToys = n + ((n - 1) / 50) * 50;
        break;
    case AIRPLANE:
        numToys = n + ((n - 1) / 50 + 1) * 50;
        break;
    }

    //현재 시간을 분 단위로 바꿈
    time = 60 * h + m;
    //numToys 만큼의 장난감을 만드는데 걸리는 시간을 누적
    time += 2 * numToys;

    printf("%d %d\n", time / 60, time % 60);
    return 0;
}
