#include <stdio.h>
/* Suma positivos.
   El programa, al recibir como datos N números enteros, obtiene la suma de los
   enteros positivos.
   I, N, NUM, SUM: variables de tipo entero. */
void main(void)
{
    int I, N, NUM, SUM; // Declaración de variables enteras: I (contador del bucle), N (número de datos a ingresar), NUM (número actual ingresado), SUM (suma de los positivos).
    SUM = 0; // Inicialización de la variable SUM a 0.
    
    printf("Ingrese el número de datos:\t"); // Solicita al usuario que ingrese la cantidad de números que se procesarán.
    scanf("%d", &N); // Lee el número de datos y lo almacena en la variable N.
    
    for (I = 1; I <= N; I++) // Bucle que se ejecuta N veces, de I = 1 a I = N.
    {
        printf("Ingrese el dato número %d:\t", I); // Solicita al usuario que ingrese el número I-ésimo.
        scanf("%d", &NUM); // Lee el número ingresado y lo almacena en la variable NUM.
        
        if (NUM > 0) // Verifica si el número ingresado es positivo.
            SUM = SUM + NUM; // Si el número es positivo, lo suma a la variable SUM.
    }
    
    printf("\nLa suma de los números positivos es: %d", SUM); // Imprime la suma de los números positivos.
}
