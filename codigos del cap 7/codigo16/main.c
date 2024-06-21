#include <stdio.h>
#include <string.h>

/* Prototipo de función */
void main(void);

/* Función principal */
void main(void)
{
    char cad1[50], cad2[50];
    char *cad0 = "";  // Declaración inicial incorrecta
    int i = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar

    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar

    cad0 = cad1;  // Asignación correcta

    cad0 = strstr(cad0, cad2);  // Busca la primera ocurrencia de cad2 en cad1

    while (cad0 != NULL)
    {
        i++;
        cad0 = strstr(cad0 + 1, cad2);  // Busca la siguiente ocurrencia de cad2 en cad1
    }

    printf("\nEl número de veces que aparece la segunda cadena es: %d", i);
}

