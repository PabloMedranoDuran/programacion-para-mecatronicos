#include <stdio.h>
/* Suma pagos.
   El programa obtiene la suma de los pagos realizados el último mes.
   PAG y SPA: variables de tipo real.*/
void main(void)
{
    float PAG, SPA = 0; // Declaración de variables de tipo real: PAG (para cada pago) y SPA (suma total de los pagos), inicializando SPA a 0.
    
    printf("Ingrese el primer pago:\t"); // Solicita al usuario que ingrese el primer pago.
    scanf("%f", &PAG); // Lee el pago ingresado por el usuario y lo almacena en la variable PAG.
    
    // Inicia una estructura do-while para asegurarse de que al menos un pago sea procesado.
    do
    {
        SPA = SPA + PAG; // Suma el pago actual a la variable SPA.
        
        printf("Ingrese el siguiente pago -0 para terminar-:\t "); // Solicita al usuario que ingrese el siguiente pago.
        scanf("%f", &PAG); // Lee el siguiente pago ingresado por el usuario y lo almacena en PAG.
        
    } while (PAG); // La condición del bucle: se repite mientras PAG no sea 0.
    
    printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime la suma total de los pagos con dos decimales.
}
