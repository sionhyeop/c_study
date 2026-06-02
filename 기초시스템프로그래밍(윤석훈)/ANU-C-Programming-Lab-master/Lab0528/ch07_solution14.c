#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	while (1)
	{
		if (n == 0)
		{
			break;
		}

		printf("%d", n % 10);
		n /= 10;
	}

	putchar('\n');
	return 0;
}