#include <stdio.h>

/* Fibonacci.
   El programa calcula y escribe los primeros 50 números de Fibonacci.
   I, PRI, SEG, SIG: variables de tipo entero. */
void main(void)
{
    int I, PRI = 0, SEG = 1, SIG; // Inicialización de las variables

    printf("\t %d \t %d", PRI, SEG); // Imprime los dos primeros números de Fibonacci

    for (I = 3; I <= 50; I++) // Bucle para calcular e imprimir los siguientes números de Fibonacci
    {
        SIG = PRI + SEG; // Calcula el siguiente número de Fibonacci sumando los dos anteriores
        PRI = SEG; // Actualiza el valor de PRI al valor actual de SEG
        SEG = SIG; // Actualiza el valor de SEG al valor actual de SIG
        printf("\t %d", SIG); // Imprime el siguiente número de Fibonacci
    }
}

