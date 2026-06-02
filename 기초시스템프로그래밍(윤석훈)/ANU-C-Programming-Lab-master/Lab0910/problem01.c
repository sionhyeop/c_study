/**
 * 사용자로부터 키보드로 2개의 숫자를 입력받아서
 * 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산의 결과를 계산해주는
 * 프로그램을 작성하시오.
 * 단, 함수를 사용하여 구현
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum eMenu
{
    Add = 1,
    Substract = 2,
    Multiply = 3,
    Divide = 4,
    Modulus = 5
};

void display_menu();
int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int modulus(int a, int b);

int main(void)
{
    char confirm;

    do
    {
        enum eMenu selected_menu;
        display_menu();
        printf("-------------------------------------\n");
        printf("원하는 메뉴를 선택하시오(1 ~ 5): ");
        scanf("%d", &selected_menu);

        int a;
        int b;
        printf("숫자 2개를 입력하시오: ");
        scanf("%d %d", &a, &b);

        switch (selected_menu)
        {
        case Add:
            printf("연산결과: %d", add(a, b));
            break;

        case Substract:
            printf("연산결과: %d", substract(a, b));
            break;

        case Multiply:
            printf("연산결과: %d", multiply(a, b));
            break;

        case Divide:
            if (b == 0)
            {
                printf("0으로 나눌수 없습니다.\n");
                break;
            }
            printf("연산결과: %.2f", divide(a, b));
            break;

        case Modulus:
            if (b == 0)
            {
                printf("0으로 나눌수 없습니다.\n");
                break;
            }
            printf("연산결과: %d", modulus(a, b));
            break;

        default:
            printf("잘못된 연산\n");
            break;
        }

        printf("\n-------------------------------------\n");
        printf("계속하려면 y(또는 Y)를 누르시오: ");

        // 입력 버퍼에서 개행 문자 제거
        scanf("\n");

        scanf("%c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');

    return 0;
}

void display_menu()
{
    printf("\n======================\n");
    printf(" MENU\n");
    printf("======================\n");
    printf("\t1. 덧셈\n");
    printf("\t2. 뺄셈\n");
    printf("\t3. 곱셈\n");
    printf("\t4. 나눗셈\n");
    printf("\t5. 나머지\n");
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}

int modulus(int a, int b)
{
    return a % b;
}