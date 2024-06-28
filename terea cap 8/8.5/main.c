#include <stdio.h>
#include <string.h>

/* Uniones. 
El programa muestra la manera como se declara una unión, así como la forma de
acceso a los campos de las variables de tipo unión tanto para asignación
de valores como para lectura y escritura. */
union datos /* Declaración de una unión. */
{
    char celular[15];
    char correo[20];
};

typedef struct /* Declaración de una estructura utilizando typedef. */
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales; 
    /* Observa que uno de los campos de la estructura alumno es una unión. */
} alumno;

void Lectura(alumno *a); /* Prototipo de función. */

int main(void)
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, .personales.celular = "5-158-40-50"}, a2, a3;
    /* Observa que sólo el primer componente de una unión puede recibir valores por
    medio de este tipo de asignaciones. */

    /* Para que puedas observar las diferentes formas en que los campos de las
    variables de tipo estructura alumno reciben valores, ingresamos los valores
    de los campos de tres formas diferentes. Los campos de a1 reciben valores
    directamente, los campos de a2 se leen en el programa principal, y los campos
    de a3 reciben valores a través de una función. */
    
    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a2.nombre, 20, stdin);
    strtok(a2.nombre, "\n");
    printf("Ingrese la carrera: ");
    fgets(a2.carrera, 20, stdin);
    strtok(a2.carrera, "\n");
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    fgets(a2.personales.correo, 20, stdin);
    strtok(a2.personales.correo, "\n");
    /* Observa que en la variable a2 de tipo estructura alumno el segundo campo de la
    unión recibe un valor. */
    
    printf("Alumno 3\n");
    Lectura(&a3); /* Se llama a una función para leer los campos de la variable a3. */ 

    /* Impresión de resultados. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular); 
    /* Observa que escribe el valor del teléfono celular asignado. */

    /* Al escribir el campo correo, escribe basura porque solo un campo de la unión puede tener un valor a la vez. */
    strcpy(a1.personales.correo, "hgimenez@hotmail.com");
    puts(a1.personales.celular); /* Ahora escribe basura en el campo del teléfono celular. */
    puts(a1.personales.correo); /* Escribe el contenido del campo (hgimenez@hotmail.com). */
    
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular); /* Escribe basura. */
    puts(a2.personales.correo); /* Escribe el contenido del segundo campo. */

    printf("Ingrese el teléfono celular del alumno 2: ");
    fflush(stdin);
    fgets(a2.personales.celular, 15, stdin);
    strtok(a2.personales.celular, "\n");
    puts(a2.personales.celular); /* Escribe el teléfono celular ingresado. */
    puts(a2.personales.correo); /* Ahora escribe basura. */
    
    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo); /* Escribe basura. */

    return 0;
}

void Lectura(alumno *a)
/* La función Lectura se utiliza para leer los campos de una variable de tipo
estructura alumno. */
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a->nombre, 20, stdin);
    strtok(a->nombre, "\n");
    fflush(stdin);
    printf("Ingrese la carrera: ");
    fgets(a->carrera, 20, stdin);
    strtok(a->carrera, "\n");
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    printf("Ingrese el teléfono celular: ");
    fflush(stdin);
    fgets(a->personales.celular, 15, stdin);
    strtok(a->personales.celular, "\n");
}

