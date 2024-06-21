#include <stdio.h>
#include <ctype.h>

void swap_case(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Ingresa una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Eliminar el salto de línea si está presente
    str[strcspn(str, "\n")] = '\0';

    swap_case(str);

    printf("Cadena convertida: %s\n", str);

    return 0;
}