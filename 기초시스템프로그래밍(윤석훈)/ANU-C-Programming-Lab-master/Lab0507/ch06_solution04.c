#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum command
{
    SCISSORS = 1,
    ROCK,
    PAPER
} command_t;

int main()
{
    srand(time(NULL));
    command_t computer = (rand() % 3) + 1;

    command_t player;
    printf("선택하시오(1: 가위, 2: 바위, 3:보) ");
    scanf("%d", &player);

    printf("컴퓨터: %d\n", computer);

    if (player == computer)
    {
        printf("비겼습니다.\n");
    }
    else if (player == SCISSORS && computer == PAPER || player == PAPER && computer == ROCK || player == ROCK && computer == SCISSORS)
    {
        printf("사용자가 이겼습니다.\n");
    }
    else
    {
        printf("사용자가 졌습니다.\n");
    }

    return 0;
}