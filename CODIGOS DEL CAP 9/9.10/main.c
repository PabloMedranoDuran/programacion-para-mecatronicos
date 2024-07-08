#include <stdio.h>

/* Alumnos.
   El programa pregunta al usuario el número de registro que desea
   modificar, obtiene el nuevo promedio del alumno y modifica tanto el
   registro como el archivo correspondiente. */
typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *);    /* Prototipo de función. */

int main(void)
{
    FILE *ar;
    
    if ((ar = fopen("ad1.dat", "r+")) != NULL)  /* Abrir el archivo en modo lectura/escritura */
    {
        modifica(ar);  /* Llamar a la función modifica para modificar el registro */
        fclose(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }
    
    return 0;
}

void modifica(FILE *ap)
/* Esta función se utiliza para modificar el promedio de un alumno en el archivo. */
{
    int d;
    alumno alu;
    
    printf("Ingrese el número de registro que desea modificar (empezando desde 1): ");
    scanf("%d", &d);
    
    fseek(ap, (d-1) * sizeof(alumno), SEEK_SET);
    /* Posicionarse en el registro deseado (d-1) * tamaño de alumno desde el inicio del archivo */
    
    fread(&alu, sizeof(alumno), 1, ap);
    /* Leer el registro actual para modificarlo */
    
    printf("\nIngrese el nuevo promedio del alumno: ");
    scanf("%f", &alu.promedio);
    
    fseek(ap, (d-1) * sizeof(alumno), SEEK_SET);
    /* Posicionarse nuevamente en el registro deseado para escribir el registro modificado */
    
    fwrite(&alu, sizeof(alumno), 1, ap);
    /* Escribir el registro modificado en el archivo */
    
    printf("Registro modificado exitosamente.\n");
}
