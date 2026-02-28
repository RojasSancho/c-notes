#include <stdio.h>
#include <stdlib.h>

/*
 * SOLUCIÓN: Array Dinámico
 *
 * Este es el código completo y correcto.
 * Compáralo con tu solución para ver qué hiciste diferente.
 */

int main() {
    printf("=== Ejercicio: Array Dinámico ===\n\n");

    // Variable para almacenar la cantidad de números
    int n;

    // Preguntar al usuario
    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &n);

    // Validar entrada (opcional pero recomendado)
    if (n <= 0) {
        printf("Error: Debes ingresar un número positivo\n");
        return 1;
    }

    // Declarar puntero
    int *numeros;

    // Reservar memoria
    // sizeof(int) = 4 bytes (usualmente)
    // n * sizeof(int) = total de bytes necesarios
    numeros = (int *)malloc(n * sizeof(int));

    // CRÍTICO: Validar que malloc no falló
    if (numeros == NULL) {
        printf("Error: No se pudo reservar memoria\n");
        return 1;
    }

    printf("Memoria reservada exitosamente para %d números\n\n", n);

    // Pedir números al usuario
    printf("Ingresa %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    // Mostrar los números ingresados
    printf("Números ingresados:\n");
    for (int i = 0; i < n; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    // Calcular el promedio
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }
    float promedio = (float)suma / n;

    // Mostrar el promedio
    printf("\nPromedio: %.2f\n", promedio);

    // CRÍTICO: Liberar la memoria
    free(numeros);

    // Buena práctica: poner NULL después de free
    numeros = NULL;

    printf("\nMemoria liberada correctamente\n");

    return 0;
}

/*
 * PUNTOS CLAVE DE ESTA SOLUCIÓN:
 *
 * 1. MALLOC:
 *    - numeros = (int *)malloc(n * sizeof(int));
 *    - Necesita BYTES, no elementos
 *    - sizeof(int) da el tamaño en bytes de un int
 *
 * 2. VALIDACIÓN NULL:
 *    - if (numeros == NULL) { ... }
 *    - SIEMPRE valida que malloc no falló
 *    - Si malloc falla, retorna NULL
 *
 * 3. USO:
 *    - numeros[i] = valor;
 *    - Se usa igual que un array estático
 *    - La diferencia es que está en el heap, no en el stack
 *
 * 4. FREE:
 *    - free(numeros);
 *    - Libera la memoria reservada
 *    - Si no lo haces = MEMORY LEAK
 *
 * 5. NULL DESPUÉS DE FREE:
 *    - numeros = NULL;
 *    - Opcional pero recomendado
 *    - Previene "use after free" bugs
 *
 * VERIFICACIÓN CON VALGRIND:
 *
 * $ valgrind --leak-check=full ./array
 *
 * Salida esperada:
 * ==12345== HEAP SUMMARY:
 * ==12345==     in use at exit: 0 bytes in 0 blocks
 * ==12345==   total heap usage: 2 allocs, 2 frees, ...
 * ==12345==
 * ==12345== All heap blocks were freed -- no leaks are possible
 *
 * Si ves "definitely lost: X bytes", tienes un memory leak.
 *
 * COMPARACIÓN CON TU SOLUCIÓN:
 *
 * - ¿Validaste NULL?
 * - ¿Usaste sizeof(int) correctamente?
 * - ¿Liberaste la memoria?
 * - ¿Tu valgrind dice "no leaks are possible"?
 *
 * Si respondiste SÍ a todo, ¡excelente trabajo!
 */

