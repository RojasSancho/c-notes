#include <stdio.h>
#include <stdlib.h>

/*
 * SOLUCIÓN: Lista Enlazada
 */

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

Nodo *crear_nodo(int dato) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;

    nuevo->dato = dato;
    nuevo->siguiente = NULL;

    return nuevo;
}

void insertar_inicio(Nodo **cabeza, int dato) {
    Nodo *nuevo = crear_nodo(dato);
    if (nuevo == NULL) return;

    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}

void imprimir(Nodo *cabeza) {
    while (cabeza != NULL) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}

void liberar(Nodo **cabeza) {
    while (*cabeza != NULL) {
        Nodo *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}

int main() {
    printf("=== Ejercicio: Lista Enlazada ===\n\n");

    Nodo *lista = NULL;

    printf("Insertando: 30, 20, 10\n");
    insertar_inicio(&lista, 30);
    insertar_inicio(&lista, 20);
    insertar_inicio(&lista, 10);

    printf("Lista: ");
    imprimir(lista);

    printf("Esperado: 10 20 30\n");

    liberar(&lista);

    return 0;
}

/*
 * PUNTOS CLAVE:
 *
 * 1. ESTRUCTURA NODO:
 *    - int dato: almacena el valor
 *    - struct Nodo *siguiente: apunta al próximo nodo
 *
 * 2. CREAR NODO:
 *    - malloc(sizeof(Nodo))
 *    - Inicializar campos
 *    - Validar NULL
 *
 * 3. INSERTAR AL INICIO:
 *    - Usar puntero a puntero (**cabeza)
 *    - Nuevo apunta a antigua cabeza
 *    - Actualizar cabeza al nuevo nodo
 *
 * 4. RECORRER:
 *    - while (cabeza != NULL)
 *    - cabeza = cabeza->siguiente
 *
 * 5. LIBERAR:
 *    - Liberar cada nodo
 *    - Actualizar cabeza
 *    - Usar puntero a puntero
 */

