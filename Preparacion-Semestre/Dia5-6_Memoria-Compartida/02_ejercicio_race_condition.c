#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO: Ver Race Condition en Acción
 *
 * OBJETIVO:
 * Ver cómo dos threads interfieren al acceder la misma variable
 *
 * INSTRUCCIONES:
 * - NO debes "arreglarlo", solo VERLO
 * - Ejecuta varias veces
 * - Anota los resultados diferentes
 *
 * TIEMPO ESTIMADO: 30 minutos
 */

int contador = 0;  // Variable COMPARTIDA entre threads

// TODO: Define la función que incrementará el contador
void *incrementar(void *arg) {
    // Loop para incrementar 100000 veces
    for (int i = 0; i < 100000; i++) {
        contador++;
    }
    return NULL;
}


int main() {
    printf("=== Ejercicio: Race Condition ===\n\n");

    printf("Esperado: contador = 200000\n");
    printf("(100000 del thread 1 + 100000 del thread 2)\n\n");

    // TODO: Declara 2 threads
    pthread_t thread1, thread2;


    contador = 0;

    // TODO: Crea thread1 que incremente el contador 100000 veces
    pthread_create(&thread1, NULL, incrementar, NULL);


    // TODO: Crea thread2 que incremente el contador 100000 veces
    pthread_create(&thread2, NULL, incrementar, NULL);


    // TODO: Espera ambos threads
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);


    printf("Resultado actual: contador = %d\n", contador);

    if (contador == 200000) {
        printf("¡Correcto! (esta vez)\n");
    } else {
        printf("¡Incorrecto! (race condition)\n");
        printf("Se perdieron: %d incrementos\n", 200000 - contador);
    }

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -pthread -Wall -Wextra -g -o race 02_ejercicio_race_condition.c
 *
 * 2. Ejecuta MUCHAS veces y anota resultados:
 *    ./race
 *    ./race
 *    ./race
 *    ... (al menos 10 veces)
 *
 * 3. Analiza:
 *    - ¿Siempre da 200000?
 *    - ¿Algunos veces da menos?
 *    - ¿Cada ejecución puede dar diferente?
 *
 * 4. Compara con 03_solucion_race_condition.c
 *
 * PUNTOS CLAVE:
 * - contador es variable global (compartida)
 * - Ambos threads incrementan 100000 veces
 * - Sin protección = race condition
 * - Cada ejecución puede dar diferente
 */

