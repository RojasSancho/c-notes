#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

/*
 * EJERCICIO INTEGRADOR: Combina TODOS los conceptos
 *
 * OBJETIVO:
 * Crear un programa que use:
 * - Memoria dinámica (Día 1-2)
 * - Pthreads (Día 3-4)
 * - Memoria compartida (Día 5-6)
 * - Listas enlazadas (Día 7-8)
 *
 * TIEMPO ESTIMADO: 120-180 minutos
 */

// TODO: Define la estructura Nodo


// TODO: Define funciones:
// - crear_nodo(int)
// - insertar_inicio(Nodo**, int)
// - imprimir(Nodo*)
// - liberar(Nodo**)
// - funcion_thread(void*) - que inserte en la lista


int main() {
    printf("=== Ejercicio Integrador ===\n\n");

    Nodo *lista = NULL;
    int n = 3;  // 3 threads

    // TODO: Reservar memoria para N threads


    printf("Creando %d threads que insertarán en la lista...\n", n);

    // TODO: Crear N threads
    // Cada thread inserta 5 números en la lista


    // TODO: Esperar todos los threads


    printf("\nLista final:\n");
    // TODO: Imprimir la lista


    // TODO: Liberar la lista


    printf("Programa terminado\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -pthread -Wall -Wextra -g -o integrador 02_ejercicio_integrador.c
 *
 * 2. Ejecuta:
 *    ./integrador
 *
 * 3. Verifica con valgrind:
 *    valgrind --leak-check=full ./integrador
 *
 * 4. NOTA: Probablemente verás race conditions
 *    (múltiples threads accediendo la misma lista sin sincronización)
 *    ¡Esto es NORMAL! La solución es mutex (próximo curso)
 *
 * CONCEPTOS INTEGRADOS:
 *
 * - malloc: reservar threads
 * - libre: liberar lista
 * - pthread_create: crear threads
 * - pthread_join: esperar threads
 * - Nodo estructura: lista enlazada
 * - memoria compartida: lista accedida por múltiples threads
 */

