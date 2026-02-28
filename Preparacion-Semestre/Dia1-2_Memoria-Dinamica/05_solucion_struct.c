#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * SOLUCIÓN: Struct Dinámico
 */

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    printf("=== Ejercicio: Struct Dinámico ===\n\n");

    int cantidad;
    printf("¿Cuántos estudiantes deseas registrar? ");
    scanf("%d", &cantidad);

    if (cantidad <= 0) {
        printf("Error: Cantidad inválida\n");
        return 1;
    }

    // Reservar memoria para array de estudiantes
    Estudiante *estudiantes = (Estudiante *)malloc(cantidad * sizeof(Estudiante));

    // Validar malloc
    if (estudiantes == NULL) {
        printf("Error: No se pudo reservar memoria\n");
        return 1;
    }

    printf("\nIngresa los datos de %d estudiantes:\n", cantidad);

    // Leer datos
    for (int i = 0; i < cantidad; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("  Nombre: ");
        scanf("%s", estudiantes[i].nombre);
        printf("  Edad: ");
        scanf("%d", &estudiantes[i].edad);
        printf("  Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
    }

    // Mostrar datos
    printf("\n=== Lista de Estudiantes ===\n");
    for (int i = 0; i < cantidad; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("  Nombre: %s\n", estudiantes[i].nombre);
        printf("  Edad: %d\n", estudiantes[i].edad);
        printf("  Promedio: %.2f\n", estudiantes[i].promedio);
    }

    // Calcular promedio general
    float suma_promedios = 0;
    for (int i = 0; i < cantidad; i++) {
        suma_promedios += estudiantes[i].promedio;
    }
    float promedio_general = suma_promedios / cantidad;
    printf("\nPromedio general: %.2f\n", promedio_general);

    // Liberar memoria
    free(estudiantes);
    estudiantes = NULL;

    printf("\nMemoria liberada correctamente\n");

    return 0;
}

/*
 * PUNTOS CLAVE:
 *
 * 1. malloc con struct:
 *    - cantidad * sizeof(Estudiante)
 *    - sizeof(Estudiante) da el tamaño total del struct
 *
 * 2. Acceso a miembros:
 *    - estudiantes[i].nombre (con punto, porque es un array)
 *    - Si fuera puntero a UN estudiante: estudiante->nombre
 *
 * 3. Un solo free:
 *    - free(estudiantes) libera TODO el array
 *    - No necesitas free por cada estudiante
 */

