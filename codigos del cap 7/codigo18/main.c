#include <stdio.h>

/* Prototipo de función */
void inverso(char *);

/* Función principal */
void main(void)
{
    char fra[50];
    
    printf("\nIngrese la línea de texto: ");
    gets(fra);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar
    
    printf("\nLa línea de texto en forma inversa es: ");
    inverso(fra);
    printf("\n");
}

/* Función para invertir una cadena de manera recursiva */
void inverso(char *cadena)
{
    if (*cadena)
    {
        inverso(cadena + 1);
        putchar(*cadena);
    }
}
