#include <stdio.h>
#include <string.h>

/* Otras funciones de la biblioteca string.h para el manejo de cadenas. */
int main(void)
{
    int i;
    char cad0[20] = "Hola México";  // Cambiar comillas dobles inteligentes a comillas dobles estándar
    char cad1[20] = "Hola Mundo";   // Inicializando otra cadena para comparación
    char cad2[20];                  // Cadena vacía para manipulación

    // Función strlen
    printf("La longitud de cad0 es: %zu\n", strlen(cad0));
    printf("La longitud de cad1 es: %zu\n", strlen(cad1));

    // Función strcmp
    if (strcmp(cad0, cad1) == 0)
        printf("Las cadenas cad0 y cad1 son iguales\n");
    else
        printf("Las cadenas cad0 y cad1 son diferentes\n");

    // Función strcpy
    strcpy(cad2, cad0);
    printf("Después de strcpy, cad2 es: %s\n", cad2);

    // Función strcat
    strcat(cad2, "!");
    printf("Después de strcat, cad2 es: %s\n", cad2);

    // Función strncpy
    strncpy(cad2, cad1, 5);
    cad2[5] = '\0';  // Asegurar terminación de la cadena
    printf("Después de strncpy, cad2 es: %s\n", cad2);

    // Función strncat
    strncat(cad2, cad1, 5);
    printf("Después de strncat, cad2 es: %s\n", cad2);

    // Función strstr
    char *ptr = strstr(cad0, "México");
    if (ptr != NULL)
        printf("La cadena 'México' se encontró en cad0: %s\n", ptr);
    else
        printf("La cadena 'México' no se encontró en cad0\n");

    ptr = strstr(cad0, "Guatemala");
    if (ptr != NULL)
        printf("La cadena 'Guatemala' se encontró en cad0: %s\n", ptr);
    else
        printf("La cadena 'Guatemala' no se encontró en cad0\n");

    // Comparaciones adicionales
    char cad3[20] = "Hola Guatemala";
    char cad4[20] = "Hola Venezuela";
    char cad5[20] = "Hola México";
    char *c, c3;

    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación —cad0 y cad3—: %d", i);
    i = strcmp(cad0, cad4);
    printf("\nResultado de la comparación —cad0 y cad4—: %d", i);
    i = strcmp(cad0, cad5);
    printf("\nResultado de la comparación —cad0 y cad5—: %d", i);

    i = strlen(cad0);
    printf("\nLongitud cadena cad0: %d", i);
    i = strlen(cad3);
    printf("\nLongitud cadena cad3: %d", i);

    // Función strchr
    c = strchr(cad3, 'G');  // Cambiar comillas dobles inteligentes a comillas dobles estándar
    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
    c = strchr(cad4, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }

    return 0;
}

