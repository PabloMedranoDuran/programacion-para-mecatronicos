#include <stdio.h>

int a, b, c, d;                             // Variables globales.

void funcion1(int, int *, int *);            // Prototipos de funciones.
int funcion2(int *, int);

int main(void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(&a, c); 
    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int r, int *b, int *c)
{
    int dd;
    a = *c;
    dd = a + 3 + *b;
    if (r)
    {
        *b = *b + 2;
        *c = *c + 3;
        printf("\n%d %d %d %d", a, *b, *c, dd);
    }
    else
    {
        *b = *b + 5;
        *c = *c + 4;
        printf("\n%d %d %d %d", a, *b, *c, dd);
    }
}

int funcion2(int *dd, int c)
{
    int bb;
    a = 1;
    bb = 7;
    funcion1(-1, dd, &bb);
    printf("\n%d %d %d %d", a, bb, c, *dd);
    c += 3;
    (*dd) += 2;
    printf("\n%d %d %d %d", a, bb, c, *dd);
    return c;
}
