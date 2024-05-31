#include <stdio.h>
#include <math.h> // Se debe incluir la librería math.h para usar la función fabs

/* Cálculo de P.
   El programa obtiene el valor de P aplicando una serie determinada.
   I, B, C: variables de tipo entero.
   RES: variable de tipo real de doble precisión. */
void main(void)
{
    int I = 1, B = 0, C;
    double RES;

    RES = 4.0 / I; // Inicializa RES con el primer término de la serie
    C = 1; // Inicializa el contador de términos

    // Continúa el bucle mientras la diferencia entre RES y PI sea mayor que 0.0005
    while (fabs(3.1415 - RES) > 0.0005)
    {
        I += 2; // Incrementa I en 2 para obtener los siguientes términos de la serie

        if (B)
        {
            RES += (double)(4.0 / I); // Si B es verdadero, suma el siguiente término a RES
            B = 0; // Cambia B a falso
        }
        else
        {
            RES -= (double)(4.0 / I); // Si B es falso, resta el siguiente término a RES
            B = 1; // Cambia B a verdadero
        }

        C++; // Incrementa el contador de términos
    }

    printf("\nNúmero de términos: %d", C); // Imprime el número de términos necesarios para alcanzar la precisión requerida
}
