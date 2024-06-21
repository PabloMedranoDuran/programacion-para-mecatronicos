#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;

    // Solicita al usuario ingresar una cadena de hasta 50 caracteres
    printf("\nIngrese la cadena de caracteres (máximo 50 caracteres): ");
    gets(cad);  // Obtiene la cadena de caracteres ingresada por el usuario

    // Itera a través de la cadena hasta encontrar el carácter nulo '\0'
    while (cad[i] != '\0')
    {
        if (islower(cad[i]))
            mi++;  // Incrementa el contador de minúsculas si es una letra minúscula
        else if (isupper(cad[i]))
            ma++;  // Incrementa el contador de mayúsculas si es una letra mayúscula
        
        i++;  // Avanza al siguiente carácter en la cadena
    }

    // Imprime el número de letras minúsculas y mayúsculas encontradas
    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
