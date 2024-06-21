#include <stdio.h>
#include <string.h>

/* Prototipo de función */
int cuentap(char *);

/* Función principal */
void main(void)
{
    int i;
    char fra[50];
    
    printf("\nIngrese la línea de texto: ");
    gets(fra);  // Advertencia: gets es inseguro, deberías usar fgets en su lugar
    strcat(fra, " ");  // Se agrega un espacio en blanco al final de la cadena
    
    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras\n", i);
}

/* Función para contar palabras */
int cuentap(char *cad)
{
    char *cad0 = " ";
    int i = 0;
    
    cad0 = strstr(cad, " ");  // Se localiza el primer espacio en blanco en la cadena
    
    while(strcmp(cad, " "))
    {
        strcpy(cad, cad0 + 1);  // Se copia la parte de la cadena después del espacio encontrado
        i++;
        cad0 = strstr(cad, " ");  // Se busca el siguiente espacio en blanco
    }
    
    return i;
}
