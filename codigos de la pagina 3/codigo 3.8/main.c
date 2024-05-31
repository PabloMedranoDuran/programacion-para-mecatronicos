#include <stdio.h>
/* Factorial.
   El programa calcula el factorial de un número entero.
   FAC, I, NUM: variables de tipo entero. */
void main(void)
{
    int I, NUM; // Declaración de variables enteras: I (contador) y NUM (número para el cual se calculará el factorial).
    long FAC; // Declaración de la variable de tipo long: FAC (para almacenar el factorial).

    printf("\nIngrese el número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &NUM); // Lee el número ingresado por el usuario y lo almacena en NUM.

    if (NUM >= 0) // Verifica si el número ingresado es no negativo.
    {
        FAC = 1; // Inicializa la variable FAC a 1 (el factorial de 0 es 1).
        
        for (I = 1; I <= NUM; I++) // Utiliza un bucle for para calcular el factorial.
        {
            FAC *= I; // Multiplica FAC por I en cada iteración.
        }
        
        printf("\nEl factorial de %d es: %ld", NUM, FAC); // Imprime el factorial del número ingresado.
    }
    else // Si el número ingresado es negativo.
    {
        printf("\nError en el dato ingresado"); // Imprime un mensaje de error.
    }
}
