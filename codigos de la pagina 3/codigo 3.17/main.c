#include <stdio.h>

/* Números perfectos.
   El programa, al recibir como dato un número entero positivo como límite, obtiene los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo.
   I, J, NUM, SUM, C: variables de tipo entero. */
void main(void)
{
    int I, J, NUM, SUM, C = 0; // Declaración de variables enteras para iteración, número límite, suma de divisores, contador de números perfectos

    printf("Ingrese el número límite: "); // Solicita el número límite
    scanf("%d", &NUM); // Lee el número límite

    for (I = 1; I <= NUM; I++) // Comienza un bucle para verificar cada número desde 1 hasta el límite
    {
        SUM = 0; // Inicializa la suma de divisores para cada número

        for (J = 1; J <= (I / 2); J++) // Comienza un bucle para encontrar los divisores de cada número
        {
            if ((I % J) == 0) // Comprueba si J es un divisor de I
            {
                SUM += J; // Suma J a la suma de divisores
            }
        }

        if (SUM == I) // Comprueba si la suma de divisores es igual al número mismo (es un número perfecto)
        {
            printf("%d es un número perfecto\n", I); // Imprime el número perfecto encontrado
            C++; // Incrementa el contador de números perfectos
        }
    }

    printf("Entre 1 y %d hay %d números perfectos\n", NUM, C); // Imprime el total de números perfectos encontrados
}

