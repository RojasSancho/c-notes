#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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

void *thread_hello ( void *thread_number) {
    const int number = (int) (intptr_t) thread_number;
    printf("Thread %d: Hello world!\n", number);
    return NULL;
}


int main(void) {
    printf("=== Ejercicio: Hola Mundo con Pthreads ===\n\n");

    // TODO: Declara 3 variables pthread_t para guardar los IDs de los threads
    pthread_t thread1, thread2, thread3;

    printf("Main: Creando threads...\n");

    // TODO: Crea el thread 1
    // - Pasa como argumento algún identificador (elige el método)
    // - Verifica que pthread_create retorna 0
    // IMPORTANTE: pasar la direccion en memoria del thread con &

    /*
     * Usamos (void*)(intptr_t)id para pasar un entero como argumento del hilo.
     * Razonamiento:
     * - intptr_t es un entero con el mismo ancho que un puntero (cuando existe),
     *   por lo que la conversión entre puntero y entero es segura/portable.
     * - No debemos castear directamente entre void* e int en plataformas donde
     *   sizeof(void*) != sizeof(int) (por ejemplo en sistemas 64-bit).
     * - Alternativa más segura: pasar la dirección de una variable (int ids[]) si
     *   necesitamos evitar cualquier cast.
     */

    if (pthread_create(&thread1, NULL, thread_hello, (void *) (intptr_t) 1) != 0) {
        printf("Error al crear thread1\n");
        return 1;
    }

    // TODO: Crea el thread 2
    if (pthread_create(&thread2, NULL, thread_hello, (void *) (intptr_t) 2) != 0) {
        printf("Error al crear thread2\n");
        return 1;
    }

    // TODO: Crea el thread 3
    if (pthread_create(&thread3, NULL, thread_hello, (void *) (intptr_t) 3) != 0) {
        printf("Error al crear thread3\n");
        return 1;
    }

    printf("Main: Threads creados, esperando que terminen...\n\n");

    // TODO: Espera a que cada thread termine con pthread_join
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    printf("\nMain: Todos los threads terminaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 * - Compila con -pthread
 * - Ejecuta varias veces para observar el comportamiento concurrente
 * - Si necesitas pista, abre HINT1.md (pista conceptual) o HINT2.md (pista más concreta)
 */
