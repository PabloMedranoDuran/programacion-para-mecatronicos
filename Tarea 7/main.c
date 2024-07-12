#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Alumno;

void agregarAlumno(Alumno **alumnos, int *cantidad);
void guardarAlumnos(Alumno *alumnos, int cantidad, const char *filename);
Alumno* leerAlumnos(int *cantidad, const char *filename);
void liberarMemoria(Alumno *alumnos);
void imprimirAlumnos(Alumno *alumnos, int cantidad);

int main() {
    Alumno *alumnos = NULL;
    int cantidad = 0;
    int opcion;
    char filename[] = "alumnos.dat";

    do {
        printf("\nMenu:\n");
        printf("1. Agregar Alumno\n");
        printf("2. Leer Alumnos del Disco\n");
        printf("3. Guardar Alumnos en Disco\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                agregarAlumno(&alumnos, &cantidad);
                break;
            case 2:
                if (alumnos != NULL) {
                    liberarMemoria(alumnos);
                }
                alumnos = leerAlumnos(&cantidad, filename);
                imprimirAlumnos(alumnos, cantidad);
                break;
            case 3:
                guardarAlumnos(alumnos, cantidad, filename);
                break;
            case 4:
                if (alumnos != NULL) {
                    liberarMemoria(alumnos);
                }
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}

void agregarAlumno(Alumno **alumnos, int *cantidad) {
    Alumno nuevoAlumno;
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", nuevoAlumno.nombre);
    printf("Ingrese la edad del alumno: ");
    scanf("%d", &nuevoAlumno.edad);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &nuevoAlumno.promedio);

    *alumnos = (Alumno *)realloc(*alumnos, (*cantidad + 1) * sizeof(Alumno));
    if (*alumnos == NULL) {
        fprintf(stderr, "Error al asignar memoria\n");
        exit(1);
    }

    (*alumnos)[*cantidad] = nuevoAlumno;
    (*cantidad)++;
    
    char otraEntrada;
    printf("¿Desea agregar otro alumno? (s/n): ");
    scanf(" %c", &otraEntrada);
    if (otraEntrada == 's' || otraEntrada == 'S') {
        agregarAlumno(alumnos, cantidad);
    }
}

void guardarAlumnos(Alumno *alumnos, int cantidad, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        fprintf(stderr, "Error al abrir el archivo\n");
        return;
    }
    fwrite(&cantidad, sizeof(int), 1, file);
    fwrite(alumnos, sizeof(Alumno), cantidad, file);
    fclose(file);
    printf("Datos guardados en el disco.\n");
}

Alumno* leerAlumnos(int *cantidad, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        fprintf(stderr, "Error al abrir el archivo\n");
        *cantidad = 0;
        return NULL;
    }
    fread(cantidad, sizeof(int), 1, file);
    Alumno *alumnos = (Alumno *)malloc(*cantidad * sizeof(Alumno));
    if (alumnos == NULL) {
        fprintf(stderr, "Error al asignar memoria\n");
        exit(1);
    }
    fread(alumnos, sizeof(Alumno), *cantidad, file);
    fclose(file);
    return alumnos;
}

void liberarMemoria(Alumno *alumnos) {
    free(alumnos);
}

void imprimirAlumnos(Alumno *alumnos, int cantidad) {
    if (cantidad == 0) {
        printf("No hay alumnos para mostrar.\n");
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               alumnos[i].nombre, alumnos[i].edad, alumnos[i].promedio);
    }
}
