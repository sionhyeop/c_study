#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char op;

    printf("**************\n");
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");
    printf("**************\n");
    
    do
    {
        printf("연산을 선택하시오: ");
        scanf(" %c", &op);

        if (op == 'Q')
        {
            break;
        }

        if (op == 'A' || op == 'S' || op == 'M' || op == 'D')
        {
            int a;
            int b;
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &a, &b);

            switch (op)
            {
            case 'A':
                printf("%d\n\n", a + b);
                break;
            case 'S':
                printf("%d\n\n", a - b);
                break;
            case 'M':
                printf("%d\n\n", a * b);
                break;
            case 'D':
                if (b == 0)
                {
                    printf("0으로 나눌 수 없습니다.\n\n");
                    break;
                }

                printf("%d\n\n", a / b);
                break;
            }
        }
    } while (op != 'Q');

    return 0;
}