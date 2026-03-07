#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO: Lista Enlazada
 *
 * OBJETIVO:
 * Implementar una lista enlazada con inserción, eliminación, recorrido y liberación
 *
 * TIEMPO ESTIMADO: 90-120 minutos
 */

// TODO: Define la estructura Nodo
// Debe contener:
// - int dato
// - struct Nodo *siguiente
typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

// TODO: Implement crear_nodo
// Recibe un int, retorna Nodo*
// Reserva memoria, inicializa datos, retorna puntero
Nodo *crear_nodo(const int dato) {
    Nodo *nuevo = malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;

    nuevo->dato = dato;
    nuevo->siguiente = NULL;

    return nuevo;
}

// TODO: Implement insertar_inicio
// Recibe Nodo** (puntero a puntero a cabeza) e int
// Crea nodo, lo vincula al inicio, actualiza cabeza
void insertar_inicio(Nodo **cabeza, int dato) {
    Nodo *nuevo = malloc(sizeof(Nodo));
    if (nuevo == NULL) return;

    nuevo->dato = dato;
    nuevo->siguiente = *cabeza;

    *cabeza = nuevo;
}

// TODO: Implement imprimir
// Recibe Nodo* (cabeza)
// Recorre la lista e imprime cada dato
void imprimir(const Nodo *cabeza) {
    while (cabeza != NULL) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}

// TODO: Implement liberar
// Libera todos los nodos
void liberar(Nodo *cabeza) {
    while (cabeza != NULL) {
        Nodo *temp = cabeza;
        cabeza = cabeza->siguiente;
        free(temp);
    }
}

int main() {
    printf("=== Ejercicio: Lista Enlazada ===\n\n");

    Nodo *lista = NULL;

    printf("Insertando: 30, 20, 10\n");
    // TODO: Insertar 30, 20, 10 (en ese orden)
    insertar_inicio(&lista, 30);
    insertar_inicio(&lista, 20);
    insertar_inicio(&lista, 10);

    printf("Lista: ");
    // TODO: Imprimir la lista
    imprimir(lista);

    printf("\nEsperado: 10 20 30\n");

    // TODO: Liberar la lista
    liberar(lista);

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -Wall -Wextra -g -o lista 02_ejercicio_lista.c
 *
 * 2. Ejecuta:
 *    ./lista
 *    Debe mostrar: 10 20 30
 *
 * 3. Verifica con valgrind:
 *    valgrind --leak-check=full ./lista
 *
 * 4. Compara con 03_solucion_lista.c
 *
 * PISTAS:
 * - Recuerda: insertar al inicio agrega nodos inversos
 * - Usa punteros a punteros para modificar cabeza
 * - Libera TODO antes de salir
 */