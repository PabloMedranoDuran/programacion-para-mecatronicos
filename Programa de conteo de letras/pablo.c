#include <stdio.h>
#include <ctype.h>

void count_characters(const char *str, int *lowercase_count, int *uppercase_count, int *digit_count) {
    *lowercase_count = 0;
    *uppercase_count = 0;
    *digit_count = 0;

    while (*str) {
        if (islower(*str)) {
            (*lowercase_count)++;
        } else if (isupper(*str)) {
            (*uppercase_count)++;
        } else if (isdigit(*str)) {
            (*digit_count)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int lowercase_count, uppercase_count, digit_count;

    printf("Ingresa una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Eliminar el salto de línea si está presente
    str[strcspn(str, "\n")] = '\0';

    count_characters(str, &lowercase_count, &uppercase_count, &digit_count);

    printf("Letras minúsculas: %d\n", lowercase_count);
    printf("Letras mayúsculas: %d\n", uppercase_count);
    printf("Números: %d\n", digit_count);

    return 0;
}
