#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *);

int main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el número de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el número %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    printf("\nNúmero de pares: %d", PAR);
    printf("\nNúmero de impares: %d", IMP);
    return 0;
}

void parimp(int NUM, int *P, int *I)
{
    if (NUM % 2 == 0)
        (*P)++;
    else
        (*I)++;
}
