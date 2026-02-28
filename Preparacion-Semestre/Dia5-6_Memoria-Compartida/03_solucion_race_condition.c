#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * SOLUCIÓN: Ver Race Condition en Acción
 */

int contador = 0;  // Variable COMPARTIDA

void *incrementar(void *arg) {
    // Incrementar 100000 veces
    for (int i = 0; i < 100000; i++) {
        contador++;
    }
    return NULL;
}

int main() {
    printf("=== Ejercicio: Race Condition ===\n\n");

    printf("Esperado: contador = 200000\n");
    printf("(100000 del thread 1 + 100000 del thread 2)\n\n");

    pthread_t thread1, thread2;

    contador = 0;

    // Crear threads
    pthread_create(&thread1, NULL, incrementar, NULL);
    pthread_create(&thread2, NULL, incrementar, NULL);

    // Esperar
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
 * ESPERADO AL EJECUTAR VARIAS VECES:
 *
 * $ ./race
 * Resultado actual: contador = 158743
 * ¡Incorrecto! (race condition)
 * Se perdieron: 41257 incrementos
 *
 * $ ./race
 * Resultado actual: contador = 200000
 * ¡Correcto! (esta vez)
 *
 * $ ./race
 * Resultado actual: contador = 172891
 * ¡Incorrecto! (race condition)
 * Se perdieron: 27109 incrementos
 *
 * $ ./race
 * Resultado actual: contador = 194567
 * ¡Incorrecto! (race condition)
 * Se perdieron: 5433 incrementos
 *
 * ANÁLISIS:
 *
 * - Los resultados son DIFERENTES cada ejecución
 * - A veces "correcto" por suerte, otras "incorrecto"
 * - El número de incrementos perdidos varía
 * - Esta es una RACE CONDITION clásica
 *
 * CAUSA:
 *
 * contador++ es:
 * 1. LEER contador
 * 2. SUMAR 1
 * 3. ESCRIBIR resultado
 *
 * Dos threads hacen esto simultáneamente:
 * - Thread 1 lee contador (valor: 100)
 * - Thread 2 lee contador (valor: 100) ← Lee el viejo valor
 * - Thread 1 escribe 101
 * - Thread 2 escribe 101 ← Se perdió un incremento
 *
 * SOLUCIÓN (próximamente):
 * - Usar MUTEX para proteger el acceso
 * - Solo 1 thread a la vez puede acceder contador
 * - Así: LEER, SUMAR, ESCRIBIR sin interrupción
 */

