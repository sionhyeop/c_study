#include <stdio.h>
#include <math.h>

void Lab6_8(void) {

	int a;

	printf("숫자(정수)입력 (1-10사이의 숫자):");
	scanf_s("%d", &a);

	if (a % 2 == 0 && a % 3 == 0)
		printf("2와3의 배수입니다");
	else if (a % 2 == 0)
		printf("2의배수입니다");
	else if (a % 3 == 0)
		printf("3의배수입니다");
	else
		printf("2의 배수도 아니고 3의 배수도 아닙니다");
}

void Lab6_7(void) {
	char a;

	printf("하나의 문자를 입력하시오:");
	scanf_s("%c", &a);

	switch(a) {
		case 'r':
		case 'R':
			printf("Rotation");
			break;
		case 'f':
		case 'F':
			printf("Forward");
			break;
		default:
			printf("Wrong instruction");
			break;
	}
}

void Lab6_6(void) {
	int x, y, z, min;
	printf("3개의 정수를 입력하시오:");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x < y && x < z)
		min = x;
	else if (y < x && y < z)
		min = y;
	else
		min = z;
	printf("가장 작은 수는 %d입니다", min);
}

void Lab6_5(void) {
	char ch;
	int a, b, c, d, e;
	printf("과세 표준:");
	scanf_s("%d", &a);

	if (a >= 0 && a <= 12000000) {
		b = 6;
		c = 0;
	}
	else if (a > 12000000 && a <= 46000000) {
		b = 15;
		c = 1080000;
	}
	else if (a > 46000000 && a <= 88000000) {
		b = 24;
		c = 5220000;
	}
	else if (a > 88000000 && a <= 150000000) {
		b = 35;
		c = 14900000;
	}
	else if (a > 150000000 && a <= 300000000) {
		b = 38;
		c = 19400000;
	}
	else if (a > 300000000 && a <= 500000000) {
		b = 40;
		c = 25400000;
	}
	else if (a > 500000000 && a <= 1000000000) {
		b = 42;
		c = 35400000;
	}
	else {
		b = 45;
		c = 65400000;
	}
	printf("소득세율 :%d%%\n",b);
	printf("(공제전)소득세 :");
	scanf_s("%d", &e);
	printf("누진공제액:%d\n", c);
	printf("산출세액:%d\n", a * b / 100 - c);	
}

void Lab6_4(void) {

	float a,b,c,result, result1, result2;

	printf("계수 a,계수 b, 계수 c를 차례대로 입력하시오:");
	scanf_s("%f %f %f", &a, &b, &c);

	if (a == 0) {
		result1 = -c / b;
		printf("방정식의 근은 %f입니다", result1);
	}
	else {
		result = b * b - 4 * a * c;
		if (result >= 0) {
			result1 = (-b + sqrt(result)) / (2 * a);
			result2 = (-b - sqrt(result)) / (2 * a);
			printf("방정식의 근은 %f, %f입니다", result1, result2);
		}
		else
			printf("실근이 존재하지않습니다.\n");
	}
}

void Lab6_3(void) {
	char op;
	int x, y, result;

	printf("수식을 입력하시오\n");
	printf("(예:2+5)\n");
	printf(">>");
	scanf_s("%d %c %d", &x, &op,10, &y);
	
	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("지원되지 않는 연산입니다.\n");
		break;
	}

	printf("%d %c %d = %d\n", x, op, y, result);
}

void Lab6_2(void) {
	char op;
	int x, y, result=0;

	printf("수식을 입력하시오:\n");
	printf("(예:2+5)\n");
	printf(">>");
	
	scanf_s("%d %c %d", &x, &op,(unsigned int)sizeof(op), &y);
	// scanf_s를 쓸 때 문자열 값을 받으려면 무조건 크기도 알려줘야한다!!

	if(op=='+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연산자입니다.\n");
	
	printf("%d %c %d = %d\n", x, op, y, result);
}

void Lab6_1(void){

	char ch;
	
	printf("문자를 입력하시오:");
	scanf_s("%c", &ch);
	
	if (ch >= 'A' && ch <= 'Z')
		printf("%c는 대문자입니다.\n", ch);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c는 소문자입니다.\n", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c는 숫자입니다.\n", ch);
	else
		printf("%c는 특수문자입니다.\n", ch);
}
