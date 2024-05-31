#include <stdio.h>
/* Lanzamiento de martillo.
   El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
   de los lanzamientos de la atleta cubana.
   I, N: variables de tipo entero.
   LAN, SLA: variables de tipo real. */
void main(void)
{
    int I, N; // Declaración de variables de tipo entero: I (contador) y N (número de lanzamientos).
    float LAN, SLA = 0; // Declaración de variables de tipo real: LAN (para cada lanzamiento) y SLA (suma total de los lanzamientos), inicializando SLA a 0.
    
    // Utiliza una estructura do-while para asegurar que N esté en el rango correcto (1 a 10).
    do
    {
        printf("Ingrese el número de lanzamientos (entre 1 y 10):\t"); // Solicita al usuario que ingrese el número de lanzamientos.
        scanf("%d", &N); // Lee el número de lanzamientos y lo almacena en N.
    } while (N < 1 || N > 10); // Condición del bucle: se repite mientras N no esté entre 1 y 10.
    
    // Utiliza un bucle for para procesar cada lanzamiento.
    for (I = 1; I <= N; I++)
    {
        printf("\nIngrese el lanzamiento %d: ", I); // Solicita al usuario que ingrese el lanzamiento I-ésimo.
        scanf("%f", &LAN); // Lee el lanzamiento ingresado y lo almacena en LAN.
        SLA = SLA + LAN; // Suma el lanzamiento actual a la variable SLA.
    }
    
    SLA = SLA / N; // Calcula el promedio de los lanzamientos.
    printf("\nEl promedio de lanzamientos es: %.2f", SLA); // Imprime el promedio de los lanzamientos con dos decimales.
}
