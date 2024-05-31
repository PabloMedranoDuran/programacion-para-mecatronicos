#include <stdio.h>
/* Nómina de profesores.
   El programa, al recibir como datos los salarios de los profesores de una
   universidad, obtiene la nómina y el promedio de los salarios.
   I: variable de tipo entero.
   SAL, NOM y PRO: variables de tipo real. */
void main(void)
{
    int I = 0; // Inicializa la variable entera I a 0. Se usará para contar el número de salarios ingresados.
    float SAL, PRO, NOM = 0; // Declara las variables de tipo flotante: SAL (para cada salario), PRO (para el promedio de salarios) y NOM (para la suma total de los salarios), inicializando NOM a 0.
    
    printf("Ingrese el salario del profesor:\t"); // Solicita al usuario que ingrese el primer salario.
    /* Observa que al menos se necesita ingresar el salario de un profesor para que
       no ocurra un error de ejecución del programa. */
    scanf("%f", &SAL); // Lee el salario ingresado por el usuario y lo almacena en la variable SAL.
    
    do
    {
        NOM = NOM + SAL; // Suma el salario actual a la variable NOM.
        I = I + 1; // Incrementa el contador I para llevar el registro del número de salarios ingresados.
        
        printf("Ingrese el salario del profesor -0 para terminar- :\t"); // Solicita al usuario que ingrese el siguiente salario.
        scanf("%f", &SAL); // Lee el siguiente salario ingresado por el usuario y lo almacena en SAL.
        
    } while (SAL); // La condición del bucle: se repite mientras SAL no sea 0.
    
    PRO = NOM / I; // Calcula el promedio de los salarios.
    printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO); // Imprime la suma total de los salarios y el promedio de los mismos.
}
