#include <stdio.h>
#include <string.h>

/* Prototipo de función */
int longitud(char *);         

/* Función principal */
void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];
    
    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i+1);
        fflush(stdin);
        gets(FRA[i]);      // Se lee la cadena de caracteres dentro del ciclo
    }
    
    printf("\n");
    
    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);
        if (t > l)
        {
            l = t;
            p = i;
        }
    }
    
    printf("\nLa cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("Longitud: %d\n", l);
}

/* Función para calcular la longitud de la cadena */
int longitud(char *cadena)
{
    int cue = 0;
    while (cadena[cue] != '\0')
        cue++;
    return cue;
}
