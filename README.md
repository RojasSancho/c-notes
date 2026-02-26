# 🧪 C-Notes: Fundamentos y Gestión de Memoria

Repositorio de notas, ejemplos y ejercicios enfocados en dominar el lenguaje C, con especial énfasis en la gestión manual de memoria y punteros.

## 📅 Planificación de Estudio

| Día | Bloques | Duración (min) | Estudio/Ejercicios | Total | Comentario | Ejercicio Obligatorio |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 1 | 3.2+3.3 | 17+16 | 33 | 66 | Bucles `for`, `while`, `do while` | - |
| 2 | 3.4+3.5 | 18+16 | 34 | 68 | Bucles anidados y depuración | - |
| 3 | 3.6+3.7 | 22+16 | 38 | 76 | Fibonacci y números primos | - |
| 4 | 4.1+4.2 | 18+18 | 36 | 72 | Funciones y prototipos | - |
| 5 | 4.3+4.4+5.1 | 8+12+8 | 28 | 66 | Void, punteros y arrays básicos | **Swap por punteros** |
| 6 | 5.2+5.3 | 12+18 | 30 | 60 | Arrays con funciones y punteros | - |
| 7 | 5.4+5.5 | 20+16 | 36 | 72 | Matrices y strings básicos | - |
| 8 | 5.6+6.1 | 12+15 | 27 | 54 | Strings avanzados y structs | - |
| 9 | 6.2+6.3 | 12+29 | 41 | 82 | Vectores de estructuras | **Struct dinámico** |
| 10 | 6.4+6.5 | 36+14 | 50 | 100 | Estructuras anidadas y punteros | - |
| 11 | 7.1+7.2 | 18+23 | 41 | 82 | Memoria dinámica: malloc/realloc | **Vector dinámico** |
| 12 | 7.3+7.4 | 13+22 | 35 | 70 | Calloc, free y strings dinámicos | - |
| 13 | 7.5+7.6 | 16+13 | 29 | 58 | Matrices y funciones dinámicas | **Arreglo de structs** |
| 14 | 7.7+8.1 | 28+16 | 44 | 88 | Ficheros y estructuras dinámicas | **Checklist Dominio** |
| 15 | 8.2+8.3 | 21+12 | 33 | 76 | Archivos y repaso final | - |

---

# 🚀 Retos de Dominio Técnico

Estos ejercicios deben resolverse priorizando la comprensión del flujo de datos en memoria sobre la rapidez de ejecución.

## 🔹 Día 5 — Intercambio por Referencia (Swap)
**El Desafío:** Romper el alcance (*scope*) local de una función para modificar variables del `main`.

* **Requerimiento:** Implementar `void swap(int *a, int *b);`.
* **Restricción:** No se permiten variables globales. El intercambio debe ocurrir directamente en las direcciones de memoria originales.
* **Punto de control:** ¿Entiendes por qué pasar los valores por copia (valor) no funciona para persistir el cambio?



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
* **Misión:** Reservar espacio para **una** `Persona` dinámicamente. Crear una función (ej. `set_datos`) que reciba el puntero y asigne los valores.
* **Punto de control:** El programa debe imprimir los datos desde el `main` después de la modificación y liberar la memoria con `free` sin dejar huérfanos.

---

## 🔹 Día 11 — Estrategia de Redimensionamiento (Vector)
**El Desafío:** Implementar un arreglo dinámico que gestione su propia capacidad física.

* **Lógica requerida:**
    1.  Capacidad inicial: **2 elementos**.
    2.  Si el vector se llena al insertar: **duplicar** la capacidad actual.
    3.  Uso obligatorio de `realloc`.
* **Punto de control:** Manejo de errores de `realloc`. Si falla, no debes perder el puntero original (usa un puntero auxiliar temporal).



---

## 🔹 Día 13 — Abstracción de Datos Dinámicos
**El Desafío:** Escalar estructuras complejas. Integración de los conceptos de los días 9 y 11.

* **Misión:** Crear un arreglo dinámico de estructuras `Persona`.
* **Complejidad:** Al redimensionar, el sistema debe mover bloques completos de `structs`. 
* **Punto de control:** ¿Cómo calculas correctamente el tamaño en bytes en `realloc`? Asegúrate de que los datos de cada persona permanezcan íntegros tras el movimiento de memoria.

---

## ✔️ Criterios de Dominio Funcional
Se considera el tema por dominado si el estudiante garantiza:

1.  **Seguridad de Memoria:** Uso estricto de `malloc`/`realloc` y su correspondiente `free`. Cero *Memory Leaks*.
2.  **Aritmética de Punteros:** Comprensión de cómo se desplaza el puntero al indexar arreglos dinámicos.
3.  **Manejo de Errores:** Verificación sistemática de punteros `NULL` tras cada reserva.
4.  **Independencia:** Capacidad de explicar la diferencia entre el Stack y el Heap sin ayuda externa.
