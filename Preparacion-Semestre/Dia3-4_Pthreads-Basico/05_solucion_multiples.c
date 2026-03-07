#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
 * SOLUCIÓN: N Threads Dinámicos
 */

void *worker(void *argumento) {
    int id = (int)argumento;
    printf("Worker %d ejecutando\n", id);
    return NULL;
}

int main() {
    printf("=== Ejercicio: N Threads Dinámicos ===\n\n");

    int n;
    printf("¿Cuántos threads deseas crear? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Debes crear al menos 1 thread\n");
        return 1;
    }

    // Reservar memoria para array de threads
    pthread_t *threads = (pthread_t *)malloc(n * sizeof(pthread_t));

    if (threads == NULL) {
        printf("Error: No se pudo reservar memoria\n");
        return 1;
    }

    printf("\nCreando %d threads...\n", n);

    // Crear todos los threads
    for (int i = 0; i < n; i++) {
        if (pthread_create(&threads[i], NULL, worker, (void *) (intptr_t) i) != 0) {
            printf("Error al crear thread %d\n", i);
            free(threads);
            return 1;
        }
    }

    printf("Esperando que terminen...\n\n");

    // Esperar a que todos terminen
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    // Liberar memoria
    free(threads);
    threads = NULL;

    printf("Todos los threads completaron\n");

    return 0;
}

/*
 * PUNTOS CLAVE:
 *
 * 1. MALLOC para threads:
 *    - pthread_t *threads = malloc(n * sizeof(pthread_t))
 *    - Necesitas n * sizeof(pthread_t) bytes
 *
 * 2. CREAR en loop:
 *    - for (int i = 0; i < n; i++)
 *    - threads[i] accede al i-ésimo thread
 *    - (void *)i castea el índice
 *
 * 3. ESPERAR en loop:
 *    - Mismo loop: for (int i = 0; i < n; i++)
 *    - pthread_join(threads[i], NULL)
 *
 * 4. LIBERAR:
 *    - free(threads) al final
 *
 * COMBINACIÓN DE CONCEPTOS:
 * - Memoria dinámica (malloc/free)
 * - Pthreads (create/join)
 * - Loops
 */

