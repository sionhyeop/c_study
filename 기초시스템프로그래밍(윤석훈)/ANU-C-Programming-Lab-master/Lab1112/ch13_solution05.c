#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} point_t;

int isEqual(const point_t *p1, const point_t *p2);

int main(void)
{
    point_t p1 = {1, 2};
    point_t p2 = {3, 5};

    if (isEqual(&p1, &p2))
    {
        printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    }
    else
    {
        printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    }

    return 0;
}

int isEqual(const point_t *p1, const point_t *p2)
{
    return p1->x == p2->x && p1->y == p2->y;
}
