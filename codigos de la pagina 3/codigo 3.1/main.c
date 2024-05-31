#include <stdio.h>
/* Nómina.
   El programa, al recibir los salarios de 15 profesores, obtiene el total de la
   nómina de la universidad.
   I: variable de tipo entero.
   SAL y NOM: variables de tipo real. */
void main(void)
{
    int I; // Declaración de la variable entera I que actuará como contador en el bucle.
    float SAL, NOM; // Declaración de las variables de tipo real SAL (para el salario) y NOM (para la nómina total).
    NOM = 0; // Inicialización de la variable NOM a 0.

    for (I = 1; I <= 15; I++) // Bucle que se ejecuta 15 veces, una por cada profesor.
    {
        printf("Ingrese el salario del profesor %d:\t", I); // Solicita al usuario que ingrese el salario del profesor I.
        scanf("%f", &SAL); // Lee el salario ingresado por el usuario y lo almacena en la variable SAL.
        NOM = NOM + SAL; // Suma el salario actual a la nómina total.
    }

    printf("\nEl total de la nómina es: %.2f", NOM); // Imprime el total de la nómina con dos decimales.
}
