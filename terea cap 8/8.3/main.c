#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Declaración de la estructura domicilio utilizando typedef. */
typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

/* Declaración de la estructura anidada empleado. */
struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura domicilio de la estructura empleado. */ 
};

/* Función que permite leer los campos de un apuntador de tipo estructura empleado. */
void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, 20, stdin);
    strtok(a->nombre, "\n");  // Elimina el carácter de nueva línea si existe
    printf("Ingrese el departamento de la empresa: ");
    fgets(a->departamento, 20, stdin);
    strtok(a->departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    getchar();  // Limpia el carácter de nueva línea del búfer

    printf("---Ingrese la dirección del empleado---\n");
    printf("\tCalle: ");
    fgets(a->direccion.calle, 20, stdin);
    strtok(a->direccion.calle, "\n");
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    getchar();  // Limpia el carácter de nueva línea del búfer
    printf("\tLocalidad: ");
    fgets(a->direccion.localidad, 20, stdin);
    strtok(a->direccion.localidad, "\n");
}

int main(void) {
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jerónimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    /* Se asigna memoria para e1 utilizando malloc. */
    e1 = (struct empleado*) malloc(sizeof(struct empleado));
    if (e1 == NULL) {
        printf("No se pudo asignar memoria\n");
        return 1;
    }

    /* Lectura de los campos de e1 */
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);
    getchar();  // Limpia el carácter de nueva línea del búfer
    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, 20, stdin);
    strtok(e1->departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    getchar();  // Limpia el carácter de nueva línea del búfer

    printf("---Ingrese la dirección del empleado---\n");
    printf("\tCalle: ");
    fgets(e1->direccion.calle, 20, stdin);
    strtok(e1->direccion.calle, "\n");
    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    getchar();  // Limpia el carácter de nueva línea del búfer
    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, 20, stdin);
    strtok(e1->direccion.localidad, "\n");

    /* Lectura de los campos de e3 */
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    getchar();  // Limpia el carácter de nueva línea del búfer
    printf("Ingrese el departamento de la empresa: ");
    fgets(e3.departamento, 20, stdin);
    strtok(e3.departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    getchar();  // Limpia el carácter de nueva línea del búfer

    printf("---Ingrese la dirección del empleado---\n");
    printf("\tCalle: ");
    fgets(e3.direccion.calle, 20, stdin);
    strtok(e3.direccion.calle, "\n");
    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    getchar();  // Limpia el carácter de nueva línea del búfer
    printf("\tLocalidad: ");
    fgets(e3.direccion.localidad, 20, stdin);
    strtok(e3.direccion.localidad, "\n");

    /* Se asigna memoria para e2 utilizando malloc. */
    e2 = (struct empleado*) malloc(sizeof(struct empleado));
    if (e2 == NULL) {
        printf("No se pudo asignar memoria\n");
        free(e1);  // Libera la memoria asignada previamente
        return 1;
    }
    Lectura(e2);
    Lectura(&e4);

    /* Imprime los datos del empleado 1 */
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);
    /* Imprime los datos del empleado 4 */
    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    /* Libera la memoria asignada dinámicamente */
    free(e1);
    free(e2);

    return 0;
}
