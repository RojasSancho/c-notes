# c-notes
Notes, examples, and small exercises focused on the fundamentals of the C programming language.

| Día | Fecha     | Bloques     | Duración video (min) | Estudio/ejercicios (aprox) | Total diario (min) | Comentario                                          |   Ejercicio obligatorio             |
| --- | ---       | ----------- | -------------------- | -------------------------- | ------------------ | --------------------------------------------------- |----------------|
| 1   | Dom 22      | 3.2+3.3     | 17+16                | 17+16                      | 66                 | Bucles `for`, `while`, `do while`, base fundamental |               |
| 2   | Lun 23      | 3.4+3.5     | 18+16                | 18+16                      | 68                 | Bucles anidados, factorial y depuración             |  |
| 3   | Mar 24      | 3.6+3.7     | 22+16                | 22+16                      | 76                 | Fibonacci y números primos, más complejidad         |  |
| 4   | Mie 25      | 4.1+4.2     | 18+18                | 18+18                      | 72                 | Funciones, tipos de funciones                       |  |
| 5   | Jue 26      | 4.3+**4.4**+_5.1_ | 8+12+8               | 8+12+8                     | 66                 | Void, punteros, arrays básicos                      |  Swap por punteros  |
| 6   | Vie 27      | **5.2+5.3**     | 12+18                | 12+18                      | 60                 | Arrays con funciones, punteros avanzados            |  |
| 7   | Sab 28      | _5.4_+5.5     | 20+16                | 20+16                      | 72                 | Matrices y strings básicos                          |  |
| 8   | Dom 1       | 5.6+**6.1**     | 12+15                | 12+15                      | 54                 | Strings avanzados, introducción estructuras         |  |
| 9   | Lun 2       | _6.2_+**6.3**     | 12+29                | 12+29                      | 82                 | Formularios + vectores de estructuras               |  Struct dinámico  |
| 10  | Mar 3      | _6.4_+**6.5**     | 36+14                | 36+14                      | 100                | Estructuras de estructuras + punteros               |  |
| 11  | Mie 4      | **7.1+7.2**     | 18+23                | 18+23                      | 82                 | Memoria dinámica, malloc/realloc                    |  Vector dinámico que crece  |
| 12  | Jue 5      | **7.3**+_7.4_     | 13+22                | 13+22                      | 70                 | Calloc, free, strings dinámicos                     |  |
| 13  | Vie 6      | _7.5_+**7.6**     | 16+13                | 16+13                      | 58                 | Matrices dinámicas y funciones con memoria dinámica |  Gestión dinámica de arreglo de structs  |
| 14  | Sab 7      | **7.7**+8.1     | 28+16                | 28+16                      | 88                 | Estructuras dinámicas + lectura de ficheros         |  Checklist: 1. Modificas valores por puntero sin errores 2. Manejas malloc/realloc/free sin fugas conceptuales 3. Entiendes quién reserva y quién libera memoria  |
| 15  | Dom 8      | 8.2+8.3+45  | 21+12+5              | 21+12+5                    | 76                 | Archivos y repaso final                             |  |

## 🧪 Ejercicios obligatorios

### 🔹 Día 5 — Swap por punteros

**Qué debe hacer el programa**
- Declarar dos variables enteras en `main`.
- Implementar una función:
```c void swap(int *a, int *b);
Intercambiar los valores usando direcciones de memoria.

Mostrar los valores antes y después del intercambio.

Conceptos que cubre

Paso por referencia en C.

Direcciones de memoria (&).

Variables puntero.

Diferencia entre modificar valor vs modificar dirección.

🔹 Día 9 — Struct dinámico

Qué debe hacer el programa

Definir una estructura:

typedef struct {
    char nombre[30];
    int edad;
} Persona;

Reservar memoria para una Persona usando malloc.

Llenar los datos desde main.

Crear una función que modifique la estructura usando puntero.

Liberar la memoria correctamente con free.

Conceptos que cubre

Estructuras (struct).

Punteros a estructuras.

Operador ->.

Reserva y liberación de memoria dinámica.

Propiedad de memoria (quién reserva y quién libera).

🔹 Día 11 — Vector dinámico que crece

Qué debe hacer el programa

Crear un vector dinámico de enteros.

Capacidad inicial: 2 elementos.

Permitir insertar valores uno por uno.

Cuando el vector se llena → duplicar capacidad con realloc.

Mostrar contenido final del vector.

Liberar memoria al finalizar.

Conceptos que cubre

Memoria dinámica en el heap.

malloc y realloc.

Redimensionamiento seguro de memoria.

Diferencia entre tamaño lógico y capacidad física.

Manejo seguro de punteros tras realocación.

🔹 Día 13 — Arreglo dinámico de structs

Qué debe hacer el programa

Crear un arreglo dinámico de Persona.

Permitir agregar nuevas personas al arreglo.

Redimensionar el arreglo cuando se llena.

Mostrar todos los registros almacenados.

Liberar toda la memoria antes de terminar.

Conceptos que cubre

Integración de estructuras y memoria dinámica.

Arreglos dinámicos de datos compuestos.

Uso de realloc con estructuras.

Acceso a estructuras mediante punteros.

Gestión completa del ciclo de vida de memoria.

✔ Criterio de dominio

Se considera dominio funcional si el programa:

Modifica datos mediante punteros sin errores.

Usa correctamente malloc, realloc y free.

No pierde datos al redimensionar memoria.

No deja memoria sin liberar.

Puede implementarse desde cero sin consultar soluciones.


