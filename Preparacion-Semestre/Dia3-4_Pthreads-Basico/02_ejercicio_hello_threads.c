#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO: Hola Mundo con Pthreads (versión limpia)
 *
 * OBJETIVO:
 * Crear 3 threads que impriman un mensaje cada uno
 *
 * INSTRUCCIONES:
 * - Completa el código donde dice // TODO:
 * - Compila: gcc -pthread -Wall -Wextra -g -o hello 02_ejercicio_hello_threads.c
 * - Ejecuta: ./hello (ejecuta varias veces para observar el orden)
 *
 * TIEMPO ESTIMADO: 45-60 minutos
 */

// TODO: Define la función que ejecutará cada thread
// Pista conceptual: pasa un identificador al thread y recupéralo dentro de la función
// void *nombre_funcion(void *argumento) {
//     // Tu código aquí
// }


int main(void) {
    printf("=== Ejercicio: Hola Mundo con Pthreads ===\n\n");

    // TODO: Declara 3 variables pthread_t para guardar los IDs de los threads
    // pthread_t t1, t2, t3;

    printf("Main: Creando threads...\n");

    // TODO: Crea el thread 1
    // - Pasa como argumento algún identificador (elige el método)
    // - Verifica que pthread_create retorna 0

    // TODO: Crea el thread 2

    // TODO: Crea el thread 3

    printf("Main: Threads creados, esperando que terminen...\n\n");

    // TODO: Espera a que cada thread termine con pthread_join

    printf("\nMain: Todos los threads terminaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 * - Compila con -pthread
 * - Ejecuta varias veces para observar el comportamiento concurrente
 * - Si necesitas pista, abre HINT1.md (pista conceptual) o HINT2.md (pista más concreta)
 */
