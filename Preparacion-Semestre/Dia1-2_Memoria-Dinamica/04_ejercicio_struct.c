#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * EJERCICIO: Struct Dinámico
 *
 * OBJETIVO:
 * Crear un programa que maneje estudiantes de forma dinámica
 *
 * TIEMPO ESTIMADO: 45-60 minutos
 */

// Estructura para representar un estudiante
typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    printf("=== Ejercicio: Struct Dinámico ===\n\n");

    int cantidad;
    printf("¿Cuántos estudiantes deseas registrar? ");
    scanf("%d", &cantidad);

    // TODO: Declara un puntero a Estudiante
    // Estudiante *estudiantes;

    // TODO: Reserva memoria para 'cantidad' estudiantes
    // estudiantes = (Estudiante *)malloc(cantidad * sizeof(Estudiante));

    // TODO: Valida que malloc no falló
    // if (estudiantes == NULL) { ... }

    printf("\nIngresa los datos de %d estudiantes:\n", cantidad);

    // TODO: Pide los datos de cada estudiante
    // for (int i = 0; i < cantidad; i++) {
    //     printf("\nEstudiante %d:\n", i + 1);
    //     printf("  Nombre: ");
    //     scanf("%s", estudiantes[i].nombre);
    //     printf("  Edad: ");
    //     scanf("%d", &estudiantes[i].edad);
    //     printf("  Promedio: ");
    //     scanf("%f", &estudiantes[i].promedio);
    // }

    // TODO: Muestra los datos de todos los estudiantes
    // printf("\n=== Lista de Estudiantes ===\n");
    // for (int i = 0; i < cantidad; i++) {
    //     printf("\nEstudiante %d:\n", i + 1);
    //     printf("  Nombre: %s\n", estudiantes[i].nombre);
    //     printf("  Edad: %d\n", estudiantes[i].edad);
    //     printf("  Promedio: %.2f\n", estudiantes[i].promedio);
    // }

    // TODO: Calcula el promedio general
    // float suma_promedios = 0;
    // for (int i = 0; i < cantidad; i++) {
    //     suma_promedios += estudiantes[i].promedio;
    // }
    // float promedio_general = suma_promedios / cantidad;
    // printf("\nPromedio general: %.2f\n", promedio_general);

    // TODO: Libera la memoria
    // free(estudiantes);
    // estudiantes = NULL;

    printf("\nMemoria liberada correctamente\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -Wall -Wextra -g -o struct 04_ejercicio_struct.c
 *
 * 2. Ejecuta y prueba:
 *    ./struct
 *
 * 3. Verifica con valgrind:
 *    valgrind --leak-check=full ./struct
 *
 * 4. Compara con 05_solucion_struct.c
 */

