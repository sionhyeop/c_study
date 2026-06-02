#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book
{
    int id;
    char title[100];
    char author[20];
} book_t;

int main(void)
{
    book_t book = {1, "바람과 함께 사라지다", "마가렛 미첼"};
    printf("{ %d, %s, %s }\n", book.id, book.title, book.author);
    return 0;
}
