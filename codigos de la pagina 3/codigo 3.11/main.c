#include <stdio.h>

/* Examen de admisión.
   El programa, al recibir como datos una serie de calificaciones de un examen,
   obtiene el rango en que se encuentran éstas.
   R1, R2, R3, R4 y R5: variables de tipo entero.
   CAL: variable de tipo real. */
void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Variables para contar el número de calificaciones en cada rango
    float CAL; // Variable para almacenar la calificación del alumno

    printf("Ingresa la calificación del alumno (-1 para salir): ");
    scanf("%f", &CAL);

    while (CAL != -1) // Bucle para ingresar calificaciones, termina cuando se ingresa -1
    {
        if (CAL >= 0 && CAL < 4) // Si la calificación está en el rango [0, 4)
        {
            R1++; // Incrementa el contador para el rango 0..3.99
        }
        else if (CAL >= 4 && CAL < 6) // Si la calificación está en el rango [4, 6)
        {
            R2++; // Incrementa el contador para el rango 4..5.99
        }
        else if (CAL >= 6 && CAL < 8) // Si la calificación está en el rango [6, 8)
        {
            R3++; // Incrementa el contador para el rango 6..7.99
        }
        else if (CAL >= 8 && CAL < 9) // Si la calificación está en el rango [8, 9)
        {
            R4++; // Incrementa el contador para el rango 8..8.99
        }
        else if (CAL >= 9 && CAL <= 10) // Si la calificación está en el rango [9, 10]
        {
            R5++; // Incrementa el contador para el rango 9..10
        }
        else
        {
            printf("Calificación inválida. Debe estar entre 0 y 10.\n");
        }

        printf("Ingresa la calificación del alumno (-1 para salir): ");
        scanf("%f", &CAL);
    }

    printf("\n0..3.99 = %d\n", R1); // Imprime el número de calificaciones en el rango 0..3.99
    printf("4..5.99 = %d\n", R2); // Imprime el número de calificaciones en el rango 4..5.99
    printf("6..7.99 = %d\n", R3); // Imprime el número de calificaciones en el rango 6..7.99
    printf("8..8.99 = %d\n", R4); // Imprime el número de calificaciones en el rango 8..8.99
    printf("9..10   = %d\n", R5); // Imprime el número de calificaciones en el rango 9..10
}

