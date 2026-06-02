#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int big;    //첫째의 나이
    int med;    //둘째의 나이
    int little; //셋째의 나이
    int diff;   //세 아이의 나이의 곱과 합의 차
    int n;

    scanf("%d", &n);

    //삼형제의 모든 나이의 경우의 수를 전부 확인
    for (big = 1;; big++)
    {
        for (med = 1; med <= big; med++)
        {
            for (little = 1; little <= med; little++)
            {
                diff = (big * med * little) - (big + med + little);
                if (diff == n || -diff == n)
                {
                    //쌍둥이가 있는지 확인
                    if (big == med || med == little)
                    {
                        printf("%d\n", big);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
