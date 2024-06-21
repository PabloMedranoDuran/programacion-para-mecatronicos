#include <stdio.h>
#include <stdlib.h>

/* Función principal */
void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    // Solicita al usuario ingresar una cadena de caracteres (S/N)
    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    // Mientras el usuario ingrese 'S' (mayúscula), se continuarán ingresando cadenas
    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);  // Limpia el búfer del teclado (puede no funcionar en todos los sistemas)

        gets(cad);  // Obtiene la cadena de caracteres ingresada por el usuario (obsoleto y peligroso)

        i++;  // Incrementa el contador de cadenas ingresadas

        sum += atof(cad);  // Convierte la cadena a número flotante y lo suma a 'sum'

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();  // Obtiene la respuesta del usuario para continuar o no
    }

    // Imprime la suma y el promedio de los números ingresados
    printf("\nSuma: %.2f", sum);
    if (i > 0)
        printf("\nPromedio: %.2f", sum / i);
    else
        printf("\nPromedio: 0.00 (No se ingresaron cadenas)");

}
