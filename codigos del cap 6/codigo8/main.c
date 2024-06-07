#include <stdio.h>

void Lectura(int [][50], int, int);
void Traspuesta(int[][50],int [][50], int, int);
void Imprime(int [][50], int, int);

void main(void) {
    int MAT[50][50], TRA[50][50];
    int FIL, COL;
    do {
        printf("Ingrese el número de filas de la matriz: ");
        scanf("%d", &FIL);
    } while (FIL > 50 || FIL < 1);

    do {
        printf("Ingrese el número de columnas de la matriz: ");
        scanf("%d", &COL);
    } while (COL > 50 || COL < 1);

    Lectura(MAT, FIL, COL);
    Traspuesta(MAT, TRA, FIL, COL);
    Imprime(TRA, COL, FIL);
}

void Lectura(int A[][50], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++) {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
}

void Traspuesta(int M1[][50], int M2[][50], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            M2[J][I] = M1[I][J];
}

void Imprime(int A[][50], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            printf("\nElemento %d %d: %d", I + 1, J + 1, A[I][J]);
}
