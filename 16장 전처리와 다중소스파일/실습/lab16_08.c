#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DEBUG

int main(void)
{
    printf("프로그램 시작\n");
#ifdef DEBUG
    printf("컴파일 날짜=%s\n", __DATE__);
    printf("치명적 에러 발생 파일 이름=%s 라인 번호= %d\n", __FILE__, __LINE__);
#endif
    printf("프로그램 종료\n");
    return 0;
}
