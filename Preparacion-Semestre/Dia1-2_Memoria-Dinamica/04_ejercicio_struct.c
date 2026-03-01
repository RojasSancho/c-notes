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
    Estudiante *estudiantes;

    // TODO: Reserva memoria para 'cantidad' estudiantes
    estudiantes = malloc(cantidad * sizeof(Estudiante));

    // TODO: Valida que malloc no falló
    if (estudiantes == NULL) {
        printf("Error: No fue posible reservar memoria.\n");
        return 1;
    }

    printf("\nIngresa los datos de %d estudiante(s):\n", cantidad);

    // TODO: Pide los datos de cada estudiante
    for (int i = 0; i < cantidad; i++) {
        printf("\nIngrese el nombre del estudiante numero %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);

        printf("Ingrese la edad estudiante numero %d: ", i + 1);
        scanf("%d", &estudiantes[i].edad);

        printf("Ingrese el promedio (0 - 100) del estudiante numero %d: ", i + 1);
        scanf("%f", &estudiantes[i].promedio);
    }


    // TODO: Muestra los datos de todos los estudiantes
    for (int i = 0; i < cantidad; i++) {
        printf("\n---------------------------------");
        printf("\nDatos del estudiante numero %d: \n", i + 1);
        printf("---------------------------------");
        printf("\nNombre:  %s ", estudiantes[i].nombre);
        printf("\nEdad:  %d ", estudiantes[i].edad);
        printf("\nPromedio:  %.2f ", estudiantes[i].promedio);
        printf("\n");
    }


    // TODO: Calcula el promedio general



    // TODO: Libera la memoria
    free(estudiantes);
    estudiantes = NULL;

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


