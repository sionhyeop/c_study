#include <stdio.h>
#include <math.h>

void Lab7_6(void) {
	int i, years;
	double total, rate, investment;

	printf("원금 :");
	scanf_s("%lf", &investment);
	printf("이율(%%):");
	scanf_s("%lf", &rate);
	printf("기간(년):");
	scanf_s("%d", &years);

	printf("====================\n");
	printf("연도 원리금\n");
	printf("====================\n");
	total = investment;
	rate /= 100.0;
	for (i = 0;i < years;i++)
	{
		total = total * (1 + rate);
		printf("%2d %10.lf\n", i + 1, total);
	}
}

void Lab7_5(void) {
	int x, y;
	for (y = 1;y <= 5;y++)
	{
		for (x = 0;x < y;x++)
			printf("*");
		printf("\n");
	}
}

void Lab7_4(void) {
	int x, y;

	for (y = 0;y < 5;y++) {
			for (x = 0; x < 10; x++) {
			printf("*");
		}
		printf("\n");
	}
}

void Lab7_3(void) {
	int number, sum = 0;

	do {
		printf("정수를 입력하시오:");
		scanf_s("%d", &number);
		sum += number;
	} while (number != 0);
	printf("숫자들의 합=%d", sum);
}

void Lab7_2(void) {

	int a, year=0;
	double init, curr;

	printf("반감기를 입력하시오(년):");
	scanf_s("%d", &a);

	init = 100.0;
	curr = init;

	while (curr >= 10.0) {
		curr = curr / 2;
		year++;
		printf("%d년 후 남은 양= %f\n", a, curr);
	}
	printf("1/10이하로 되기까지 걸린 시간 = %d년", year * a);
}

void Lab7_1(void) {
	int i, n, sum;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다\n",n,sum);
}