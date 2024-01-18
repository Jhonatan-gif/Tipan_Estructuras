#include <stdio.h>

// Definición de la estructura
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

// Función para ingresar los datos de un alumno
void ingresarDatos(struct alumno *alum)
{
    printf("Ingrese la matricula: ");
    scanf("%d", &alum->matricula);

    // Limpieza del búfer después de scanf
    fflush(stdin);

    printf("Ingrese el nombre: ");
    gets(alum->nombre);

    printf("Ingrese la direccion: ");
    gets(alum->direccion);

    printf("Ingrese la carrera: ");
    gets(alum->carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &alum->promedio);
}

// Función para mostrar los datos de un alumno
void mostrarDatos(struct alumno alum)
{
    printf("\n Numero Matricula: %d\n", alum.matricula);
    printf("Nombre: %s\n", alum.nombre);
    printf("Direccion e-mail: %s\n", alum.direccion);
    printf("Carrera: %s\n", alum.carrera);
    printf("Promedio: %.2f\n", alum.promedio);
}

int main()
{
    int n;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &n);

    // Limpieza del búfer después de scanf
    fflush(stdin);

    // Declaración de un arreglo de estructuras
    struct alumno alumnos[n];

    // Bucle para ingresar los datos de cada alumno
    for (int i = 0; i < n; i++)
    {
        printf("\nIngresando datos para el alumno %d:\n", i + 1);
        ingresarDatos(&alumnos[i]);
    }

    // Mostrar los datos ingresados
    printf("\nDatos de los alumnos ingresados:\n");
    for (int i = 0; i < n; i++)
    {
        mostrarDatos(alumnos[i]);
    }

    return 0;
}