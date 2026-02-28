#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO: Hola Mundo con Pthreads
 *
 * OBJETIVO:
 * Crear 3 threads que impriman un mensaje cada uno
 *
 * INSTRUCCIONES:
 * - Completa el código donde dice // TODO:
 * - Compila: gcc -pthread -Wall -Wextra -g -o hello 02_ejercicio_hello_threads.c
 * - Ejecuta: ./hello
 * - Verifica: valgrind --leak-check=full ./hello
 *
 * TIEMPO ESTIMADO: 45-60 minutos
 */

// TODO: Define la función que ejecutará cada thread
// Recuerda:
// - Debe retornar void *
// - Debe recibir void *argumento
// - Debe castear el argumento a int
// void *nombre_funcion(void *argumento) {
//     // Tu código aquí
// }


int main() {
    printf("=== Ejercicio: Hola Mundo con Pthreads ===\n\n");

    // TODO: Declara 3 variables pthread_t para guardar los IDs de los threads
    // pthread_t thread1, thread2, thread3;


    printf("Main: Creando threads...\n");

    // TODO: Crea el thread 1
    // - Pasa como argumento el número 1
    // - Verifica que pthread_create retorna 0
    // if (pthread_create(&thread1, NULL, ...) != 0) {
    //     printf("Error al crear thread1\n");
    //     return 1;
    // }


    // TODO: Crea el thread 2
    // - Pasa como argumento el número 2


    // TODO: Crea el thread 3
    // - Pasa como argumento el número 3


    printf("Main: Threads creados, esperando que terminen...\n\n");

    // TODO: Espera a que thread1 termine
    // pthread_join(thread1, NULL);


    // TODO: Espera a que thread2 termine


    // TODO: Espera a que thread3 termine


    printf("\nMain: Todos los threads terminaron\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila:
 *    gcc -pthread -Wall -Wextra -g -o hello 02_ejercicio_hello_threads.c
 *
 * 2. Ejecuta:
 *    ./hello
 *
 * 3. Ejecuta varias veces (nota el orden diferente):
 *    ./hello
 *    ./hello
 *    ./hello
 *
 * 4. Verifica con valgrind:
 *    valgrind --leak-check=full ./hello
 *
 * 5. Compara con 03_solucion_hello_threads.c
 *
 * NOTAS:
 * - Recuerda usar -pthread al compilar
 * - El orden de los mensajes puede cambiar (threads concurrentes)
 * - Siempre espera con pthread_join()
 * - El argumento se pasa como (void *)numero
 */

