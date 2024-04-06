#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Se crea este programa para calcular la lista de alumnos a inscribir y obtener un listado final de alumnos inscritos
Fecha: 05/04/2024
Autor: Adrián Antonio Pérez Cesatti

*/
// Definición del objeto Alumno
typedef struct {
    char nombre[100];
    char apellp[100];
    char apellm[100];
    int edad;
    int grado;
    char grupo [100];
    char sexo[100];
    char email[100];
    char materia[100];
} Alumno;

int main() {
    int num_alumnos;
    printf("Ingrese el numero de alumnos a inscribir: ");
    scanf("%d", &num_alumnos);

    // Crear un arreglo de alumnos
    Alumno *alumnos = (Alumno*) malloc(num_alumnos * sizeof(Alumno));

    // Leer la información de cada alumno
    for (int i = 0; i < num_alumnos; i++) {
        printf("\nIngrese los datos del alumno %d:\n", i+1);
        printf("NOTA: Los valores a ingresar no deben contener espacios\n");
        // Leer nombre del alumno
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre); 
        // Leer apellido parterno del alumno
        printf("Apellido paterno: ");
        scanf("%s", alumnos[i].apellp); 
        // Leer apellido materno del alumno
        printf("Apellido materno: ");
        scanf("%s", alumnos[i].apellm);
         // Leer edad del alumno
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
         // Leer grado del alumno
        printf("Grado (solo numeros): ");
        scanf("%d", &alumnos[i].grado);
         // Leer grupo del alumno
        printf("Grupo: ");
        scanf("%s", alumnos[i].grupo);
         // Leer sexo del alumno
        printf("Sexo: ");
        scanf("%s", alumnos[i].sexo);
         // Leer email del alumno
        printf("E-mail: ");
        scanf("%s", alumnos[i].email);
        // Leer materia del alumno
        printf("Materia: ");
        scanf("%s", alumnos[i].materia);
    }

    // Mostrar la información de todos los alumnos inscritos
    printf("\nListado de Alumnos Inscritos:\n");
    for (int i = 0; i < num_alumnos; i++) {
        printf("\nAlumno %d:\n", i+1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Apellido Paterno: %s\n", alumnos[i].apellp);
        printf("Apellido Materno: %s\n", alumnos[i].apellm);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Grado: %d\n", alumnos[i].grado);
        printf("Grupo: %s\n", alumnos[i].grupo);
        printf("Sexo: %s\n", alumnos[i].sexo);
        printf("E-mail: %s\n", alumnos[i].email);
        printf("Materia: %s\n", alumnos[i].materia);
    }

    // Liberar la memoria asignada para el arreglo de alumnos
    free(alumnos);
    getc;
    return 0;
}