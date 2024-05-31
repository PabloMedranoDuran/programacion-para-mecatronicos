#include <stdio.h>
#include <math.h>

/* Pares e impares.
   El programa, al recibir como datos N números enteros, obtiene la suma de los
   números pares y calcula el promedio de los impares.
   I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */
void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; // Declaración e inicialización de variables

    printf("Ingrese el número de datos que se van a procesar:\t");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            printf("\nIngrese el número %d: ", I);
            scanf("%d", &NUM);

            if (NUM % 2 == 0) // Verifica si el número es par
            {
                SPA += NUM; // Suma el número par a SPA
            }
            else
            {
                SIM += NUM; // Suma el número impar a SIM
                CIM++; // Incrementa el contador de números impares
            }
        }

        printf("\n La suma de los números pares es: %d", SPA);

        if (CIM > 0)
        {
            printf("\n El promedio de números impares es: %5.2f", (float)SIM / CIM); // Calcula e imprime el promedio de los números impares
        }
        else
        {
            printf("\n No se ingresaron números impares."); // Mensaje si no hay números impares
        }
    }
    else
    {
        printf("\n El valor de N es incorrecto"); // Mensaje si N es menor o igual a 0
    }
}
