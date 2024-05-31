#include <stdio.h>
/* Suma pagos.
   El programa, al recibir como datos un conjunto de pagos realizados en el último
   mes, obtiene la suma de los mismos.
   PAG y SPA: variables de tipo real. */
void main(void)
{
    float PAG, SPA; // Declaración de variables de tipo real: PAG (para cada pago) y SPA (suma total de los pagos).
    SPA = 0; // Inicialización de la variable SPA a 0.
    
    printf("Ingrese el primer pago:\t"); // Solicita al usuario que ingrese el primer pago.
    scanf("%f", &PAG); // Lee el pago ingresado por el usuario y lo almacena en la variable PAG.
    
    while (PAG) // Bucle que se ejecuta mientras PAG no sea 0.
    {
        SPA = SPA + PAG; // Suma el pago actual a la variable SPA.
        
        printf("Ingrese el siguiente pago:\t"); // Solicita al usuario que ingrese el siguiente pago.
        scanf("%f", &PAG); // Lee el siguiente pago ingresado por el usuario y lo almacena en PAG.
        // La condición del bucle se evalúa nuevamente aquí, y se repite si PAG no es 0.
    }
    
    printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime la suma total de los pagos con dos decimales.
}
