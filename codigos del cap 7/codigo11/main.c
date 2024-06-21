#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p, cad[50];
    int n;

    // Solicita al usuario ingresar una cadena de hasta 50 caracteres
    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    gets(cad);  // Obtiene la cadena de caracteres ingresada por el usuario

    // Solicita al usuario ingresar la posición en la cadena que desea verificar
    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);  // Obtiene la posición especificada por el usuario

    // Verifica si la posición ingresada está dentro del rango válido
    if ((n >= 0) && (n < 50))
    {
        p = cad[n - 1];  // Obtiene el carácter en la posición especificada

        // Verifica si el carácter obtenido es una letra minúscula
        if (islower(p))
            printf("\n%c es una letra minúscula", p);
        else
            printf("\n%c no es una letra minúscula", p);
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto");
    }
}
