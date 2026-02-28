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


    // TODO: Reserva memoria para 'cantidad' estudiantes


    // TODO: Valida que malloc no falló


    printf("\nIngresa los datos de %d estudiantes:\n", cantidad);

    // TODO: Pide los datos de cada estudiante



    // TODO: Muestra los datos de todos los estudiantes



    // TODO: Calcula el promedio general



    // TODO: Libera la memoria


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


