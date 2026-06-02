#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum scoreType
{
    STRIKE = 'X',
    BALL = 'B', //STRIKE 뒤에 오는 무의미한 값
    SPARE = '/',
    OPEN = '-',
    GUTTER = 'G'
};

char board[22];

//char형 '0'~'9' 숫자 데이터를 int형 정수로 반환
int CharToInt(char num);

//점수판에서 해당 index의 점수를 반환
int ScoreCompute(int index);

//다음 인덱스를 참조해서 보너스 점수를 반환
//index: 인덱스
//numBonus: 보너스의 갯수 (ex.스트라이크=2개, 스페어=1개)
int BonusCompute(int index, int numBonus);

int main()
{
    int score = 0;
    int i;

    scanf("%s", board);

    //0에서 9프레임까지 계산
    for (i = 0; i < 18; i++)
    {
        score += ScoreCompute(i);

        //스트라이크와 스페어의 보너스 점수 계산
        if (board[i] == STRIKE)
        {
            //i+1은 B이기 때문에 i+2를 인수로 전달
            score += BonusCompute(i + 2, 2);
        }
        else if (board[i] == SPARE)
        {
            score += BonusCompute(i + 1, 1);
        }
    }

    //10프레임 계산
    for (i = 18; i < 21; i++)
    {
        score += ScoreCompute(i);
    }

    printf("%d", score);

    return 0;
}

int CharToInt(char num)
{
    return num - '0';
}

int ScoreCompute(int index)
{
    switch (board[index])
    {
    case STRIKE:
        return 10;

    case SPARE:
    {
        //HACK: i가 0일때 -1번 인덱스를 참조할 수 있지만, 정상적인 입력에선 SPARE는 i가 1 이상일 때만 나오므로 문제 없음
        int spareValue;
        spareValue = 10 - CharToInt(board[index - 1]);
        return spareValue;
    }

    case OPEN:
    case GUTTER:
    case BALL:
        return 0;

    default:
        //0부터 9까지의 문자 처리
        return CharToInt(board[index]);
    }
}

int BonusCompute(int index, int numBonus)
{
    if (numBonus == 0)
    {
        return 0;
    }

    switch (board[index])
    {
    case STRIKE:
        if (index < 18)
        {
            return 10 + BonusCompute(index + 2, numBonus - 1);
        }
        else
        {
            //예외: 10프레임에는 XXX와 같은 입력이 주어질 수 있음
            return 10 + BonusCompute(index + 1, numBonus - 1);
        }

    case SPARE:
    {
        int spareValue = 10 - CharToInt(board[index - 1]);
        return spareValue + BonusCompute(index + 1, numBonus - 1);
    }

    case OPEN:
    // intentional fallthrough
    case GUTTER:
    // intentional fallthrough
    case BALL:
        return BonusCompute(index + 1, numBonus - 1);

    default:
    {
        //0부터 9까지의 점수 처리
        int value = CharToInt(board[index]);
        return value + BonusCompute(index + 1, numBonus - 1);
    }
    }
}