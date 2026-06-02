#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} point_t;

int get_quadrant(const point_t *p);

int main(void)
{
    point_t p = {-1, 2};

    printf("(%d, %d)의 사분면 = %d\n", p.x, p.y, get_quadrant(&p));
    return 0;
}

int get_quadrant(const point_t *p)
{
    if (p->x > 0 && p->y > 0)
    {
        return 1;
    }
    else if (p->x < 0 && p->y > 0)
    {
        return 2;
    }
    else if (p->x < 0 && p->y < 0)
    {
        return 3;
    }
    else if (p->x > 0 && p->y < 0)
    {
        return 4;
    }

    return -1;
}