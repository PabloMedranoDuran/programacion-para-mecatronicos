#include <stdio.h>
#include <math.h>
/* Suma cuadrados.
   El programa, al recibir como datos un grupo de enteros positivos, obtiene el
   cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */
void main(void)
{
    int NUM; // Declaración de la variable entera NUM para almacenar cada número ingresado.
    long CUA, SUC = 0; // Declaración de las variables de tipo long: CUA (para el cuadrado del número) y SUC (para la suma de los cuadrados).
    
    printf("\nIngrese un número entero -0 para terminar-:\t"); // Solicita al usuario que ingrese el primer número.
    scanf("%d", &NUM); // Lee el número ingresado por el usuario y lo almacena en la variable NUM.
    
    while (NUM) // Bucle que se ejecuta mientras NUM no sea 0.
    {
        CUA = pow(NUM, 2); // Calcula el cuadrado del número usando la función pow y lo almacena en CUA.
        printf("\n%d al cuadrado es %ld", NUM, CUA); // Imprime el número y su cuadrado.
        
        SUC = SUC + CUA; // Suma el cuadrado del número a la variable SUC.
        
        printf("\nIngrese un número entero -0 para terminar-:\t"); // Solicita al usuario que ingrese el siguiente número.
        scanf("%d", &NUM); // Lee el siguiente número ingresado por el usuario y lo almacena en NUM.
    }
    
    printf("\nLa suma de los cuadrados es %ld", SUC); // Imprime la suma total de los cuadrados.
}
