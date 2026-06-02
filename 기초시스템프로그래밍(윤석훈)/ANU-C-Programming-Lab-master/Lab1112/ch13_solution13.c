#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum type
{
    TYPE_TRIANGLE,
    TYPE_RECTANGLE,
    TYPE_CIRCLE
} type_t;

typedef struct triangle
{
    int base;
    int height;
} triangle_t;

typedef struct rectangle
{
    int width;
    int height;
} rectangle_t;

typedef struct circle
{
    int radius;
} circle_t;

typedef struct shape
{
    type_t type;
    union
    {
        triangle_t triangle;
        rectangle_t rectangle;
        circle_t circle;
    } data;
} shape_t;

int main(void)
{
    const double PI = 3.141592;

    shape_t shape;

    printf("도형의 타입을 입력하시오(0=삼각형, 1=사각형, 2=원): ");
    scanf("%d", &shape.type);

    double area;
    switch (shape.type)
    {
    case TYPE_TRIANGLE:
        printf("밑변과 높이의 길이를 입력하시오: ");
        scanf("%d %d", &shape.data.triangle.base, &shape.data.triangle.height);

        area = shape.data.triangle.base * shape.data.triangle.height / 2;
        break;

    case TYPE_RECTANGLE:
        printf("가로와 세로의 길이를 입력하시오: ");
        scanf("%d %d", &shape.data.rectangle.width, &shape.data.rectangle.height);

        area = shape.data.rectangle.width * shape.data.rectangle.height;
        break;

    case TYPE_CIRCLE:
        printf("반지름의 길이를 입력하시오: ");
        scanf("%d", &shape.data.circle.radius);

        const int radius = shape.data.circle.radius;
        area = PI * radius * radius;
        break;

    default:
        printf("잘못된 입력\n");
        return 0;
    }

    printf("면적은 %.2lf\n", area);
    return 0;
}