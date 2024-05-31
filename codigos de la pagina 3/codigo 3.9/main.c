
#include <stdio.h>
/* Serie.
   El programa imprime los términos y obtiene la suma de una determinada serie.
   I, SSE y CAM: variables de tipo entero. */
void main(void)
{
    int I = 2, CAM = 1; // Inicializa las variables enteras I a 2 y CAM a 1.
    long SSE = 0; // Inicializa la variable de tipo long SSE a 0 para almacenar la suma de la serie.
    
    while (I <= 2500) // Bucle que se ejecuta mientras I sea menor o igual a 2500.
    {
        SSE = SSE + I; // Suma el valor de I a SSE.
        printf("\t %d", I); // Imprime el valor de I.
        
        if (CAM) // Si CAM es 1.
        {
            I += 5; // Incrementa I en 5.
            CAM--; // Decrementa CAM en 1, haciéndolo 0.
        }
        else // Si CAM es 0.
        {
            I += 3; // Incrementa I en 3.
            CAM++; // Incrementa CAM en 1, haciéndolo 1.
        }
    }
    
    printf("\nLa suma de la serie es: %ld", SSE); // Imprime la suma de la serie.
}
