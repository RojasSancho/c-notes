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

# 🧪 Retos de Dominio: Punteros y Gestión de Memoria en C

Esta serie de ejercicios está diseñada para pasar del manejo de valores básicos a la gestión compleja de memoria en el *Heap*. 

---

## 🔹 Día 5 — Intercambio por Referencia (Swap)
**El Desafío:** Romper el alcance (*scope*) local de una función para modificar variables del `main`.

* **Requerimiento:** Implementar `void swap(int *a, int *b);`.
* **Restricción:** No se permite el uso de variables globales. El intercambio debe ocurrir directamente en las direcciones de memoria de las variables originales.
* **Punto de control:** ¿Entiendes por qué pasar los valores por copia no funcionaría aquí?



---

## 🔹 Día 9 — Persistencia en el Heap (Structs)
**El Desafío:** Gestionar el ciclo de vida de un tipo de dato compuesto fuera de la pila (*stack*).

* **Estructura base:**
    ```c
    typedef struct {
        char nombre[30];
        int edad;
    } Persona;
    ```
* **Misión:** Reservar espacio para **una** `Persona` dinámicamente. Debes crear una función que reciba el puntero y asigne valores (ej. `set_datos`).
* **Punto de control:** El programa debe ser capaz de imprimir los datos desde el `main` después de llamar a la función modificadora, y finalmente liberar la memoria sin dejar fugas.

---

## 🔹 Día 11 — Estrategia de Redimensionamiento (Vector)
**El Desafío:** Implementar un arreglo dinámico que gestione su propia capacidad.

* **Lógica requerida:**
    1.  Iniciar con una capacidad física de **2**.
    2.  Al intentar insertar un elemento cuando el vector está lleno, se debe **duplicar** la capacidad.
    3.  Uso obligatorio de `realloc`.
* **Punto de control:** Debes manejar el error de `realloc`. Si la redirección falla, el programa no debe perder el puntero original (puntero temporal de seguridad).



---

## 🔹 Día 13 — Abstracción de Datos Dinámicos
**El Desafío:** Escalar estructuras complejas. Es la culminación de los días anteriores.

* **Misión:** Crear un arreglo dinámico de estructuras `Persona`. 
* **Complejidad:** Cada vez que el arreglo crezca, se deben mover bloques de estructuras completas en memoria.
* **Punto de control:** ¿Cómo calculas el nuevo tamaño en bytes para `realloc` cuando trabajas con un `struct`? Asegúrate de que cada `Persona` mantenga su integridad tras el movimiento de memoria.

---

## ✔️ Criterios de Evaluación (Criterio de Dominio)
Para considerar el tema por dominado, el estudiante debe garantizar:

1.  **Seguridad de Memoria:** Uso estricto de `malloc` / `realloc` y su correspondiente `free`. Cero *Memory Leaks*.
2.  **Aritmética de Punteros:** Comprensión de cómo se desplaza el puntero en arreglos dinámicos.
3.  **Manejo de Errores:** Verificación de punteros `NULL` tras cada reserva de memoria.
4.  **Independencia:** Capacidad de explicar el flujo de datos entre el Stack y el Heap sin apoyo visual.
