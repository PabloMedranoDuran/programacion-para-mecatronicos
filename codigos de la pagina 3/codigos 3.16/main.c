#include <stdio.h>

/* Calificaciones.
   El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor y peor promedio.
   I, MAT, MAMAT y MEMAT: variables de tipo entero.
   CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/
void main(void)
{
    int I, MAT, MAMAT, MEMAT; // Declaración de variables enteras para iteración, matrícula del alumno con mejor promedio y matrícula del alumno con peor promedio
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // Declaración de variables en punto flotante para sumar las calificaciones, almacenar el promedio, la calificación actual, el mejor promedio y el peor promedio

    printf("Ingrese la matrícula del primer alumno:\t"); // Solicita la matrícula del primer alumno
    scanf("%d", &MAT); // Lee la matrícula del primer alumno

    while (MAT) // Comienza un bucle mientras la matrícula sea diferente de cero
    {
        SUM = 0; // Inicializa la suma de calificaciones para cada alumno

        for (I = 1; I <= 5; I++) // Comienza un bucle para ingresar las calificaciones de cada alumno
        {
            printf("\tIngrese la calificación %d del alumno: ", I); // Solicita la calificación
            scanf("%f", &CAL); // Lee la calificación
            SUM += CAL; // Suma la calificación a la suma total
        }

        PRO = SUM / 5; // Calcula el promedio de las calificaciones del alumno

        printf("\nMatrícula: %d\tPromedio: %5.2f", MAT, PRO); // Imprime la matrícula y el promedio del alumno actual

        if (PRO > MAPRO) // Comprueba si el promedio actual es mayor que el mejor promedio registrado hasta ahora
        {
            MAPRO = PRO; // Actualiza el mejor promedio
            MAMAT = MAT; // Almacena la matrícula del alumno con el mejor promedio
        }

        if (PRO < MEPRO) // Comprueba si el promedio actual es menor que el peor promedio registrado hasta ahora
        {
            MEPRO = PRO; // Actualiza el peor promedio
            MEMAT = MAT; // Almacena la matrícula del alumno con el peor promedio
        }

        printf("\n\nIngrese la matrícula del siguiente alumno: "); // Solicita la matrícula del siguiente alumno
        scanf("%d", &MAT); // Lee la matrícula del siguiente alumno
    }

    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO); // Imprime la matrícula y el promedio del alumno con el mejor promedio
    printf("\n\nAlumno con peor  Promedio:\t%d\t%5.2f", MEMAT, MEPRO); // Imprime la matrícula y el promedio del alumno con el peor promedio
}
