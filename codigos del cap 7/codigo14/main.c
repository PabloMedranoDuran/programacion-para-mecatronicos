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

/* Función cuenta: calcula la longitud de la cadena de forma recursiva */
int cuenta(char *cadena)
{
    if (cadena[0] == '\0')  // Caso base: caracter nulo indica fin de la cadena
        return 0;
    else
        return (1 + cuenta(&cadena[1]));  // Llamada recursiva avanzando al siguiente caracter
}
