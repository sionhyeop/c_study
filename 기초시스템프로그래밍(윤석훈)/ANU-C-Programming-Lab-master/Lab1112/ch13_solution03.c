#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct mail
{
    char title[30];
    char sender[30];
    char receiver[30];
    char content[100];
    char date[10];
    int priority;
} mail_t;

int main()
{
    mail_t mail =
        {
            "안부 메일",
            "chulsoo@hankuk.ac.kr",
            "hsh@hankuk.ac.kr",
            "안녕하십니까? 별일 없으신지요?",
            "2010/9/1",
            1};

    printf("제목: %s\n", mail.title);
    printf("수신자: %s\n", mail.sender);
    printf("발신자: %s\n", mail.receiver);
    printf("내용: %s\n", mail.content);
    printf("날짜: %s\n", mail.date);
    printf("우선순위: %d\n", mail.priority);

    return 0;
}