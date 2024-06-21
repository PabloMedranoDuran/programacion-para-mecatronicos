#include <stdio.h>

/* Prototipo de la función para contar ocurrencias */
int cuenta(char *, char);

/* Función principal */
void main(void)
{
    char car, cad[50];
    int res;

    // Solicita al usuario ingresar una cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // Obtiene la cadena de caracteres (obsoleto y peligroso)

    fflush(stdin);  // Limpia el búfer del teclado

    // Solicita al usuario ingresar un carácter
    printf("\nIngrese el caracter: ");
    car = getchar();  // Obtiene el carácter ingresado por el usuario

    // Llama a la función cuenta para contar las ocurrencias del carácter en la cadena
    res = cuenta(cad, car);

    // Imprime el resultado
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}

/* Función cuenta: Cuenta las ocurrencias del carácter en la cadena */
int cuenta(char *cad, char car)
{
    int i = 0, r = 0;

    // Itera sobre la cadena hasta encontrar el carácter nulo '\0' que indica el fin de la cadena
    while (cad[i] != '\0')
    {
        // Compara cada carácter de la cadena con el carácter buscado
        if (cad[i] == car)
        {
            r++;  // Incrementa el contador si encuentra una coincidencia
        }
        i++;  // Avanza al siguiente carácter en la cadena
    }

    return r;  // Retorna el número de ocurrencias encontradas
}
