#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct account
{
    int number;
    char name[20];
    int balance;
} account_t;

int main(void)
{
    account_t account = {1, "홍길동", 100000};
    printf("{ %d, %s, %d }\n", account.number, account.name, account.balance);
    return 0;
}