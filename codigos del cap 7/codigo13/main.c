#include <stdio.h>

/* Prototipo de función */
int cuenta(char *);

/* Función principal */
void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);  // Utilizando fgets en lugar de gets para evitar desbordamientos de búfer

    i = cuenta(cad);

    printf("\nLongitud de la cadena: %d", i);
}

/* Función cuenta: calcula la longitud de la cadena */
int cuenta(char *cadena)
{
    int c = 0;

    while (cadena[c] != '\0')  // Se corrige la condición para verificar el carácter nulo '\0'
    {
        c++;
    }

    return c;
}
