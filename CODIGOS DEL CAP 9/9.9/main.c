#include <stdio.h>

/* Alumnos.
   El programa lee bloques —variables de tipo estructura alumno— de un archivo
   de acceso directo. */
typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);    /* Prototipo de función. */

int main(void)
{
    FILE *ar;
    
    if ((ar = fopen("ad1.dat", "rb")) != NULL)  /* Abrir el archivo en modo lectura binaria */
    {
        lee(ar);  /* Llamar a la función lee para leer los registros */
        fclose(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }
    
    return 0;
}

void lee(FILE *ap)
/* Esta función se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu;
    
    while (fread(&alu, sizeof(alumno), 1, ap) == 1)  /* Leer un registro completo */
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %.2f\t", alu.promedio);
        puts(alu.nombre);
    }
}
