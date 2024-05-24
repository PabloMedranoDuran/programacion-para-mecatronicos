#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6, o
reprobado en caso contrario.
PRO: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float PRO; // Variable para almacenar el promedio del alumno.

    printf("Ingrese el promedio del alumno: "); // Solicita al usuario que ingrese el promedio del alumno.
    scanf("%f", &PRO); // Lee el promedio ingresado por el usuario y lo almacena en la variable PRO.

    if (PRO >= 6.0) // Verifica si el promedio es mayor o igual a 6.
        printf("\nAprobado"); // Si el promedio es mayor o igual a 6, imprime "Aprobado".
    else
        printf("\nReprobado"); // Si el promedio es menor que 6, imprime "Reprobado".

} // Termina el bloque de la función main.
