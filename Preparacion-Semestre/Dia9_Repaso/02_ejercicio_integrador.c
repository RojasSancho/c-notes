#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <stdint.h>

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

// Declaración mínima de Nodo para que el esqueleto compile
typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

// TODO: Define funciones:
Nodo *crear_nodo(const int dato) {
    Nodo *nuevo = malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;

    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}
void insertar_inicio(Nodo** cabeza, int dato) {
    Nodo *nuevo = crear_nodo(dato);

    nuevo->siguiente = *cabeza;

    *cabeza = nuevo;

}
void imprimir(const Nodo* cabeza) {
    while (cabeza != NULL) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}
void liberar(Nodo* cabeza) {
    while (cabeza != NULL) {
        Nodo *temp = cabeza;

        cabeza = cabeza->siguiente;
        free(temp);
    }
}
void* insertar_thread(void* arg) {
    Nodo **cabeza = (Nodo**) arg;
    for (int i = 0; i < 5; i++ ) {
        printf("Thread %lu insertando %d\n",
               (unsigned long)pthread_self(), i);
        insertar_inicio(cabeza, i);
    }
    return NULL;
}

int main(void) {
    printf("=== Ejercicio Integrador ===\n\n");

    Nodo *lista = NULL;
    const int n = 3;  // 3 threads

    // TODO: Reservar memoria para N threads
    pthread_t *threads = malloc((size_t)n * sizeof(pthread_t));
    if (threads == NULL) {
        printf("Error: No se pudo reservar memoria\n");
        return 1;
    }

    printf("Creando %d threads que insertarán en la lista...\n", n);

    // TODO: Crear N threads
    // Cada thread inserta 5 números en la lista
    for (int i = 0; i < n; i++) {
        pthread_create(&threads[i], NULL, insertar_thread, &lista);
    }

    // TODO: Esperar todos los threads
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("\nLista final:\n");
    // TODO: Imprimir la lista
    imprimir(lista);

    // TODO: Liberar la lista
    free(threads);
    liberar(lista);

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
 * 4. NOTA: Es posible que observes comportamientos inconsistentes
 *    cuando múltiples threads acceden la misma estructura sin protección.
 *    Esto es parte del experimento: en cursos posteriores verás primitivas de
 *    sincronización que permiten resolver estos problemas.
 *
 * CONCEPTOS INTEGRADOS (alto nivel):
 * - memoria dinámica, threads, estructuras enlazadas y acceso compartido
 */
