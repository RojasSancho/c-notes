#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

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

// Firma de la función worker (deja al alumno definir el comportamiento)
void *worker(void *argumento);

int main(void) {
    printf("=== Ejercicio: N Threads Dinámicos ===\n\n");

    int n = 0;
    printf("¿Cuántos threads deseas crear? ");
    // Leer cantidad deseada por el usuario
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida\n");
        return 1;
    }

    if (n <= 0) {
        printf("Error: Debes crear al menos 1 thread\n");
        return 1;
    }

    // TODO: Reserva memoria para un array de pthread_t (si n es variable)
    // pthread_t *threads = NULL; // malloc aquí si lo decides

    // TODO: Valida que malloc no falló (si usas malloc)

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

    // TODO: Libera la memoria si corresponde

    printf("Todos los threads completaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 * - Compila con -pthread
 * - Ejecuta con diferentes valores de N
 * - Si necesitas pista conceptual, abre HINT1.md; para una pista más concreta abre HINT2.md
 */
