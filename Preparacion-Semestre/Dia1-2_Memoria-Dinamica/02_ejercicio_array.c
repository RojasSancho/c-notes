#include <stdio.h>
#include <stdlib.h>

/*
 * EJERCICIO: Array Dinámico
 *
 * OBJETIVO:
 * Completar este programa para que:
 * 1. Pida al usuario cuántos números quiere ingresar
 * 2. Reserve memoria dinámicamente para esos números
 * 3. Permita al usuario ingresar los números
 * 4. Calcule el promedio
 * 5. Libere la memoria correctamente
 *
 * INSTRUCCIONES:
 * - Completa el código donde dice // TODO:
 * - Compila: gcc -Wall -Wextra -g -o array 02_ejercicio_array.c
 * - Ejecuta: ./array
 * - Verifica: valgrind --leak-check=full ./array
 *
 * TIEMPO ESTIMADO: 30-45 minutos
 */

int main() {
    printf("=== Ejercicio: Array Dinámico ===\n\n");

    // TODO: Declara una variable 'n' para almacenar cuántos números quiere el usuario
    // int n;

    // TODO: Pregunta al usuario "¿Cuántos números deseas ingresar? "
    // printf(...);

    // TODO: Lee la respuesta del usuario
    // scanf(...);

    // TODO: Declara un puntero a int llamado 'numeros'
    // int *numeros;

    // TODO: Reserva memoria para 'n' enteros usando malloc
    // Recuerda: malloc necesita el número de BYTES, no el número de elementos
    // numeros = (int *)malloc(...);

    // TODO: Valida que malloc no falló (verificar si es NULL)
    // if (numeros == NULL) {
    //     printf("Error: No se pudo reservar memoria\n");
    //     return 1;
    // }

    printf("Memoria reservada exitosamente para %d números\n\n", n);

    // TODO: Pide al usuario que ingrese los números
    printf("Ingresa %d números:\n", n);
    // for (int i = 0; i < n; i++) {
    //     printf("Número %d: ", i + 1);
    //     scanf("%d", &numeros[i]);
    // }

    printf("\n");

    // TODO: Muestra los números ingresados
    printf("Números ingresados:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("numeros[%d] = %d\n", i, numeros[i]);
    // }

    // TODO: Calcula el promedio
    // int suma = 0;
    // for (int i = 0; i < n; i++) {
    //     suma += numeros[i];
    // }
    // float promedio = (float)suma / n;

    // TODO: Muestra el promedio
    // printf("\nPromedio: %.2f\n", promedio);

    // TODO: Libera la memoria
    // free(numeros);

    // TODO: Pon el puntero en NULL (buena práctica)
    // numeros = NULL;

    printf("\nMemoria liberada correctamente\n");

    return 0;
}

/*
 * CUANDO TERMINES:
 *
 * 1. Compila sin warnings:
 *    gcc -Wall -Wextra -g -o array 02_ejercicio_array.c
 *
 * 2. Ejecuta y prueba:
 *    ./array
 *    Ingresa: 5
 *    Luego: 10 20 30 40 50
 *    Debería mostrar promedio: 30.00
 *
 * 3. Verifica con valgrind:
 *    valgrind --leak-check=full ./array
 *    Debe decir: "All heap blocks were freed"
 *
 * 4. Si todo funciona, compara con 03_solucion_array.c
 *
 * NOTAS:
 * - Si te atascas, revisa 01_concepto.md
 * - Recuerda: malloc necesita BYTES, no elementos
 * - Recuerda: SIEMPRE validar NULL
 * - Recuerda: Por cada malloc, un free
 */

