#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * SOLUCIÓN: Hola Mundo con Pthreads
 */

// Función que ejecutará cada thread
void *funcion_thread(void *argumento) {
    int numero = (int)argumento;
    printf("Hola desde thread %d\n", numero);
    return NULL;
}

int main() {
    printf("=== Ejercicio: Hola Mundo con Pthreads ===\n\n");

    // Declarar 3 threads
    pthread_t thread1, thread2, thread3;

    printf("Main: Creando threads...\n");

    // Crear thread 1
    if (pthread_create(&thread1, NULL, funcion_thread, (void *)1) != 0) {
        printf("Error al crear thread1\n");
        return 1;
    }

    // Crear thread 2
    if (pthread_create(&thread2, NULL, funcion_thread, (void *)2) != 0) {
        printf("Error al crear thread2\n");
        return 1;
    }

    // Crear thread 3
    if (pthread_create(&thread3, NULL, funcion_thread, (void *)3) != 0) {
        printf("Error al crear thread3\n");
        return 1;
    }

    printf("Main: Threads creados, esperando que terminen...\n\n");

    // Esperar a que terminen
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    printf("\nMain: Todos los threads terminaron\n");

    return 0;
}

/*
 * PUNTOS CLAVE:
 *
 * 1. FUNCIÓN DEL THREAD:
 *    - void *funcion_thread(void *argumento)
 *    - Recibe un puntero genérico (void *)
 *    - Lo castea a int: (int)argumento
 *
 * 2. PTHREAD_CREATE:
 *    - pthread_create(&thread, NULL, funcion, (void *)numero)
 *    - El argumento se castea a (void *)
 *    - Verifica que retorna 0
 *
 * 3. PTHREAD_JOIN:
 *    - Espera a que el thread termine
 *    - Sin esto, main terminaría sin esperar
 *
 * 4. COMPILACIÓN:
 *    - gcc -pthread -Wall -Wextra -g -o hello 03_solucion_hello_threads.c
 *
 * EJECUCIÓN ESPERADA:
 *
 * $ ./hello
 * === Ejercicio: Hola Mundo con Pthreads ===
 *
 * Main: Creando threads...
 * Main: Threads creados, esperando que terminen...
 *
 * Hola desde thread 1
 * Hola desde thread 2
 * Hola desde thread 3
 *
 * Main: Todos los threads terminaron
 *
 * NOTA: El orden de los "Hola desde thread X" puede cambiar cada ejecución.
 * Esto es NORMAL - son threads concurrentes.
 */

