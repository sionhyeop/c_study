#include <stdio.h>

void Lab5_13(void) {
	int x, y, z, max;

	printf("세 개의 정수를 입력하시오:");
	scanf_s("%d %d %d", &x, &y, &z);

	max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

	printf("가장 큰 수는 %d입니다.\n", max);
}

void Lab5_12(void) {
	int num;

	printf("정수를 입력하시오:");
	scanf_s("%d", &num);

	printf("%s입니다.\n", (num % 2 == 0) ? "짝수" : "홀수");
	
}

void Lab5_11(void) {
	int sec,min,h;
	printf("초를 입력하시오:");
	scanf_s("%d", &sec);

	h = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec % 60;

	printf("%d hours, %dminutes, and %d seconds", h, min, sec);
}

void Lab5_10(void) {
	int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);
	
	f = (double)5 / 4;
	printf("%f\n", f);

	f = 5.0 / 4;
	printf("%f\n", f);

	f = (double)5 / (double)4;
	printf("%f\n", f);

	i = 1.3 + 1.8;
	printf("%d\n", i);

	i = (int)1.3 + (int)1.8;
	printf("%d\n",i);

}

void Lab5_9(void) {
	printf("AND : %08X\n",0x9 & 0xA);
	printf("OR : %08X\n", 0x9 | 0xA);
	printf("XOR : %08X\n", 0x9 ^ 0xA);
	printf("NOT : %08X\n", ~0x9);
	printf("<< : %08X\n", 0x4 << 1);
	printf(">> : %08X\n", 0x4 >> 1);
}

void Lab5_8(void) {
	int x, y;

	printf("첫 번째'수=");
	scanf_s("%d", &x);
	printf("두 번째 수=");
	scanf_s("%d", &y);

}

void Lab5_7(void) {
	int x, y;

	printf("두 개의 정수를 입력하시오:");
	scanf_s("%d%d", &x, &y);

	printf("%d && %d의 결과값 :%d", x, y, x && y);
	printf("%d||%d의 결과값 :%d", x, y, x || y);
	printf("!%d의 결과값: %d",x,!x);
}

void Lab5_6(void) {
	int x, y;

	printf("두 개의 정수를 입력하시오:");
	scanf_s("%d %d", &x, &y);

	printf("x==y의 결과값: %d\n", x == y);
	printf("x !=y의 결과값: %d\n", x != y);
	printf("x>y의 결과값:%d\n", x > y);
	printf("x<y의 결과값:%d\n", x < y);
	printf("x>=y의 결과값:%d\n", x >= y);
	printf("x<=y의 결과값:%d\n", x <= y);
}

void Lab5_5(void) {
	int x = 0, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("x=%d, y=%d, z=%d", x, y, z);
}

void Lab5_4(void) {
	int x, y, z;
	printf("물건 값을 입력하시오 :");
	scanf_s("%d", &x);
	printf("사용자가 낸돈 :");
	scanf_s("%d", &y);
	z = y - x;
	printf("오천원권:%d장\n", z / 5000);
	z %= 5000;
	printf("천원권:%d장\n", z / 1000);
	z %= 1000;
	printf("오백원 동전:%d개\n", z / 500);
	z %= 500;
	printf("백원권:%d개\n", z / 100);

}

void Lab5_3(void) {
	int x = 10, y = 10;

	printf("x%d\n", x);
	printf("++x의 값 = %d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++의 값=%d\n", y++);
	printf("y=%d\n", y);

}

void Lab5_2(void) {
	int s = 60;
	int input, minute, second;

	printf("초를 입력하시오");
	scanf_s("%d", &input);

	minute = input / s;
	second = input % s;

	printf("%d초는 %d분 %d초입니다.", input, minute, second);

}

void Lab5_1(void) {
	double x, y, result;

	printf("두 개의 실수를 입력하시오:");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("x+y=%f\n", result);

	result = x / y;
	printf("%f / %f = %f", x, y, result);
}


//int main(void) {
//	int x = 0; y = 0;
//	int result;
//
//
//}


//int main(void) {
//	int i;
//	double f;
//
//	f = 5 / 4;
//	printf("%f\n", f);
//
//	f = (double)5 / 4;
//	printf("%f\n", f);
//
//	f = 5.0 / 4;
//	printf("%f\n", f);
//
//	return 0;
//}