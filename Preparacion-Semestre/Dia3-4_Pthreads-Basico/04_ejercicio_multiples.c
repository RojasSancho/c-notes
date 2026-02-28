#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO AVANZADO: N Threads Dinámicos
 *
 * OBJETIVO:
 * El usuario decide cuántos threads crear
 *
 * INSTRUCCIONES:
 * - Completa el código donde dice // TODO:
 * - Usa malloc para crear array dinámico de pthread_t
 * - Crea N threads
 * - Espera a todos
 *
 * TIEMPO ESTIMADO: 60-90 minutos
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

    // TODO: Reserva memoria para un array de pthread_t
    // pthread_t *threads = (pthread_t *)malloc(...);


    // TODO: Valida que malloc no falló


    printf("\nCreando %d threads...\n", n);

    // TODO: Loop para crear todos los threads
    // for (int i = 0; i < n; i++) {
    //     // Crea el thread i
    // }


    printf("Esperando que terminen...\n\n");

    // TODO: Loop para esperar a todos los threads
    // for (int i = 0; i < n; i++) {
    //     // Espera el thread i
    // }


    // TODO: Libera la memoria


    printf("Todos los threads completaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -pthread -Wall -Wextra -g -o multiples 04_ejercicio_multiples.c
 *
 * 2. Ejecuta con diferentes valores:
 *    ./multiples
 *    ¿Cuántos threads? 5
 *
 * 3. Verifica con valgrind:
 *    valgrind --leak-check=full ./multiples
 *
 * 4. Compara con 05_solucion_multiples.c
 *
 * PISTA:
 * - Usa malloc(n * sizeof(pthread_t))
 * - threads[i] para acceder al i-ésimo thread
 * - No olvides free(threads) al final
 */

