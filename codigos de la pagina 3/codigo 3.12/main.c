#include <stdio.h>
#include <math.h>

/* Serie de ULAM.
   El programa, al recibir como dato un entero positivo, obtiene y escribe
   la serie de ULAM.
   NUM: variable de tipo entero. */
void main(void)
{
    int NUM; // Variable para almacenar el número ingresado por el usuario

    printf("Ingresa el número para calcular la serie: "); // Solicita al usuario que ingrese un número
    scanf("%d", &NUM); // Lee el número ingresado por el usuario y lo almacena en NUM

    if (NUM > 0) // Verifica si el número ingresado es positivo
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", NUM); // Imprime el primer número de la serie

        while (NUM != 1) // Continúa el ciclo hasta que NUM sea igual a 1
        {
            if (NUM % 2 == 0) // Si NUM es par
            {
                NUM = NUM / 2; // Divide NUM por 2
            }
            else // Si NUM es impar
            {
                NUM = NUM * 3 + 1; // Multiplica NUM por 3 y le suma 1
            }

            printf("%d \t", NUM); // Imprime el siguiente número de la serie
        }
    }
    else // Si el número ingresado es negativo o cero
    {
        printf("\nNUM debe ser un entero positivo"); // Imprime un mensaje de error
    }
}

