#include <stdio.h>

/* Incrementa salarios.
   El programa incrementa el salario de los empleados de una empresa
   — actualiza el archivo correspondiente — si sus ventas son superiores
   al millón de pesos anuales. */
typedef struct {
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);    /* Prototipo de función. */

int main(void) {
    FILE *ar;

    if ((ar = fopen("ad5.dat", "r+")) != NULL) {
        incrementa(ar);  /* Llama a la función incrementa para actualizar los salarios */
        fclose(ar);
    } else {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0;
}

void incrementa(FILE *ap) {
    empleado emple;
    int size = sizeof(empleado);
    
    fread(&emple, size, 1, ap);   /* Leer el primer registro del archivo */

    while (!feof(ap)) {
        int pos = ftell(ap) / size;  /* Determinar la posición del registro actual */

        float sum = 0;
        for (int j = 0; j < 12; j++) {
            sum += emple.ventas[j];  /* Calcular las ventas anuales del empleado */
        }

        if (sum > 1000000) {
            emple.salario *= 1.10;  /* Incrementar el salario en un 10% */
            
            fseek(ap, (pos - 1) * size, SEEK_SET);  /* Posicionarse para escribir el registro actualizado */
            fwrite(&emple, size, 1, ap);  /* Escribir el registro actualizado */
            
            fseek(ap, pos * size, SEEK_SET);  /* Reposicionarse para leer el siguiente registro */
        }

        fread(&emple, size, 1, ap);  /* Leer el siguiente registro */
    }
}
