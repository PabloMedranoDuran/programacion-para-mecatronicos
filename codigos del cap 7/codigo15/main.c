#include <stdio.h>
#include <ctype.h>

/* Prototipo de función */
void interpreta(char *);

/* Función principal */
void main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar

    interpreta(cad);
}

/* Función interpreta: decodifica la cadena de caracteres */
void interpreta(char *cadena)
{
    int i = 0, j, k;

    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))  // Verifica si el caracter es una letra
        {
            k = cadena[i - 1] - '0';  // Convierte el caracter numérico a su valor entero
            for (j = 0; j < k; j++)
            {
                putchar(cadena[i]);  // Imprime el caracter tantas veces como indique k
            }
        }
        i++;
    }
}
