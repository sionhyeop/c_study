#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a > b ? a : (b > c ? b : c);
	printf("최대값: %d\n", max);
	return 0;
}