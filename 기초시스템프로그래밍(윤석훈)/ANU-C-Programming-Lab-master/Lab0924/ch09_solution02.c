#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void get_dice_face();

int main()
{
    for (int i = 0; i < 100; i++)
    {
        get_dice_face();
    }
    return 0;
}

void get_dice_face()
{
    static int faceCount[6] = {
        0,
    };
    static int callCount = 0;

    faceCount[rand() % 6]++;
    callCount++;

    if (callCount == 100)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%d->%d\n", i + 1, faceCount[i]);
        }
    }
}