/**
 * 참고: C 수업에서 배운 가장 큰 type인 double로도 무리수를 표현할 수 없다.
 * 그러나 예를 들어 2시 방향에 있다는 것은 x와 y의 비율이 sqrt(3) : 1 이어야 한다.
 * 따라서 이 답안은 1, 2, 4, 5, ...와 같은 답이 나올 수 없음을 전제한다.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Solution(double x, double y);

int main()
{
    double x, y;

    while (1)
    {
        scanf("%lf %lf", &x, &y);
        Solution(x, y);
        printf("\n");
    }

    return 0;
}

void Solution(double x, double y)
{
    //12, 3, 6, 9와 같은 명확한 답 처리
    if (x == 0)
    {
        if (y > 0)
        {
            printf("12\n");
        }
        else
        {
            printf("6\n");
        }
        return;
    }
    else if (y == 0)
    {
        if (x > 0)
        {
            printf("3\n");
        }
        else
        {
            printf("9\n");
        }
        return;
    }

    //부등식의 영역을 이용하여 각 사분면에 맞게 답 처리
    if (x > 0 && y > 0)
    {
        //1사분면 처리
        if (y > sqrt(3) * x)
        {
            printf("12 1\n");
        }
        else if (y < x / sqrt(3))
        {
            printf("2 3\n");
        }
        else
        {
            printf("1 2\n");
        }
        return;
    }
    else if (x > 0 && y < 0)
    {
        //2사분면 처리
        if (y < -sqrt(3) * x)
        {
            printf("5 6\n");
        }
        else if (y > -x / sqrt(3))
        {
            printf("3 4\n");
        }
        else
        {
            printf("4 5\n");
        }
        return;
    }
    else if (x < 0 && y < 0)
    {
        //3사분면 처리
        if (y < sqrt(3) * x)
        {
            printf("6 7\n");
        }
        else if (y > x / sqrt(3))
        {
            printf("8 9\n");
        }
        else
        {
            printf("7 8\n");
        }
        return;
    }
    else if (x < 0 && y > 0)
    {
        //4사분면 처리
        if (y > -sqrt(3) * x)
        {
            printf("11 12\n");
        }
        else if (y < -x / sqrt(3))
        {
            printf("9 10\n");
        }
        else
        {
            printf("10 11\n");
        }
        return;
    }

    return;
}