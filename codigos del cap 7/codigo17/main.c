#include <stdio.h>
#include <string.h>

/* Prototipo de función */
char *inverso(char *);

/* Función principal */
void main(void)
{
    char fra[50], aux[50];
    
    printf("\nIngrese la línea de texto: ");
    gets(fra);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar
    
    strcpy(aux, inverso(fra));  // Se copia a aux el resultado de la función inverso
    
    printf("\nLa línea de texto en forma inversa es: ");
    puts(aux);
}

/* Función para invertir una cadena */
char *inverso(char *cadena)
{
    int i = 0, j, lon;
    char cad;

    lon = strlen(cadena);
    j = lon - 1;

    while (i < j)
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }

    return cadena;
}
