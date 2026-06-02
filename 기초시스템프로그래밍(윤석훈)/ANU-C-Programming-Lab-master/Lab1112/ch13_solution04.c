#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complex
{
    double real;
    double imag;
} complex_t;

complex_t complex_add(complex_t *a, complex_t *b);

void print_complex(const complex_t *c);

int main(void)
{
    complex_t a = {1.0, 2.0};
    complex_t b = {2.0, 3.0};
    complex_t sum = complex_add(&a, &b);

    print_complex(&a);
    print_complex(&b);
    print_complex(&sum);

    return 0;
}

complex_t complex_add(complex_t *a, complex_t *b)
{
    complex_t result = {a->real + b->real, a->imag + b->imag};
    return result;
}

void print_complex(const complex_t *c)
{
    printf("%.2lf + %.2lfi\n", c->real, c->imag);
}