#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
 * EJERCICIO AVANZADO: N Threads Dinámicos (versión limpia)
 *
 * OBJETIVO:
 * El usuario decide cuántos threads crear
 *
 * INSTRUCCIONES:
 * - Completa el código donde dice // TODO:
 * - Usa memoria dinámica donde haga falta
 * - Crea N threads y espera a que terminen
 *
 * TIEMPO ESTIMADO: 60-90 minutos
 */

// Función que ejecutará cada hilo
void *worker(void *argumento) {
    /*
     * pthread_create solo permite pasar un void* como argumento.
     * Para enviar un entero de forma portable, lo convertimos a intptr_t
     * (tipo entero garantizado del mismo tamaño que un puntero)
     * y luego lo convertimos nuevamente a int.
     *
     * Esto evita el error clásico de pasar &i (dirección de variable local),
     * que produce condiciones de carrera.
     */
    const int id = (int) (intptr_t) argumento;
    printf("Worker %d ejecutando.\n", id);
    return NULL;
}

int main(void) {
    printf("=== Ejercicio: N Threads Dinámicos ===\n\n");

    int n = 0;
    printf("¿Cuántos threads deseas crear? ");
    // Validamos que scanf realmente leyó un entero válido
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida\n");
        return 1;
    }

    // No tiene sentido crear 0 o negativos hilos
    if (n <= 0) {
        printf("Error: Debes crear al menos 1 thread\n");
        return 1;
    }

    // TODO: Reserva memoria para un array de pthread_t (si n es variable)
    /*
     * Reservamos memoria dinámica porque n es determinado en tiempo de ejecución.
     * No podemos usar un arreglo estático tipo:
     * pthread_t threads[n];  (eso sería VLA y no siempre deseable).
     *
     * sizeof(pthread_t) garantiza portabilidad.
     */
    pthread_t *threads = (pthread_t *)malloc((size_t)n * sizeof(pthread_t));

    // TODO: Valida que malloc no falló (si usas malloc)
    /*
     * Siempre validar malloc.
     * Si falla, el sistema no pudo asignar memoria suficiente.
     */
    if (threads ==  NULL) {
        printf("Error: No fue posible reservar memoria con malloc.");
        return 1;
    }
    printf("\nCreando %d threads...\n\n", n);

    // TODO: Loop para crear todos los threads
    /*
     * created lleva control de cuántos hilos fueron creados exitosamente.
     * Esto es crítico para poder limpiar correctamente si falla pthread_create
     * a mitad del proceso.
     */
    int created = 0;
    for (int i = 0; i < n; ++i) {
        /*
         * pthread_create:
         * - &threads[i] almacena el identificador del hilo
         * - NULL usa atributos por defecto
         * - worker es la función que ejecutará el hilo
         * - (void*)(intptr_t)i pasa el ID de forma segura
         */
        if (pthread_create(&threads[i], NULL, worker, (void*)(intptr_t)i) != 0) {
            fprintf(stderr, "Error creando thread %d\n", i);

            /*
             * Si ocurre un error, debemos esperar (join) únicamente
             * los hilos que sí fueron creados.
             *
             * No hacerlo generaría hilos "zombies" o recursos no liberados.
             */
            for (int j = 0; j < created; ++j) {
                pthread_join(threads[j], NULL);
            }
            free(threads); // Liberamos memoria antes de salir
            return 1;
        }
        ++created;
    }

    printf("Esperando que terminen...\n\n");

    // TODO: Loop para esperar a todos los threads
    /*
     * pthread_join bloquea el hilo principal hasta que el hilo indicado termine.
     * Esto evita que el programa finalice mientras aún hay hilos ejecutándose.
     *
     * Es obligatorio hacer join si no usamos pthread_detach.
     */
    for (int i = 0; i < n; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            fprintf(stderr, "Error haciendo join del thread %d\n", i);
        }
    }

    // TODO: Libera la memoria si corresponde
    /*
     * Una vez que todos los hilos terminaron,
     * liberamos la memoria dinámica reservada.
     */
    free(threads);
    threads = NULL; // Buena práctica defensiva

    printf("\nTodos los threads completaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 * - Compila con -pthread
 * - Ejecuta con diferentes valores de N
 * - Si necesitas pista conceptual, abre HINT1.md; para una pista más concreta abre HINT2.md
 */
