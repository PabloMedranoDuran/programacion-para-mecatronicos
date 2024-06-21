#include <stdio.h>
#include <string.h>

/* Declaración de cadenas de caracteres y asignación de valores. */
int main(void)
{
    char *cad0;
    cad0 = "Argentina";          /* La declaración y la asignación son correctas. */
    puts(cad0);
    cad0 = "Brasil";             /* Correcto. Se modifica el contenido de la posición en memoria a la que apunta la variable cad0. */
    puts(cad0);

    /* Para evitar el uso incorrecto de gets, utilizaremos fgets en su lugar. */
    char cad1[100];              /* Reservamos espacio en memoria para cad1. */
    printf("Ingrese una cadena: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = 0; /* Eliminar el salto de línea leído por fgets */
    puts(cad1);

    char cad2[20] = "México";    /* Correcto. */
    puts(cad2);
    printf("Ingrese otra cadena: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = 0; /* Eliminar el salto de línea leído por fgets */
    puts(cad2);

    /* La siguiente línea es incorrecta y genera un error de compilación. */
    /* cad2[10] = "Guatemala"; */

    /* Si se quiere copiar una cadena en otra, se debe usar strcpy o strncpy */
    strncpy(cad2, "Guatemala", sizeof(cad2) - 1);
    cad2[sizeof(cad2) - 1] = '\0';  /* Asegurarse de que la cadena está terminada en NULL */
    puts(cad2);

    return 0;
}


