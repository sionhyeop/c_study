#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>

int main(void)
{
    char operation[5];
    int num1;
    int num2;

    printf("연산을 입력하시오: ");
    scanf("%s %d %d", operation, &num1, &num2);

    int result;
    if (strcmp(operation, "add") == 0)
    {
        result = num1 + num2;
    }
    else if (strcmp(operation, "sub") == 0)
    {
        result = num1 - num2;
    }
    else if (strcmp(operation, "mul") == 0)
    {
        result = num1 * num2;
    }
    else if (strcmp(operation, "div") == 0)
    {
        // Can't divide with zero
        assert(num2 != 0);

        result = num1 / num2;
    }

    printf("연산의 결과 %s %d %d\n", operation, num1, num2);
    return 0;
}