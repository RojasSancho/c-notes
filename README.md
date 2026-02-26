# 🧪 C-Notes: Fundamentos y Gestión de Memoria

Repositorio de preparación técnica en C. El objetivo es dominar la gestión de recursos antes de avanzar hacia la **Programación Paralela y Concurrente**.

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

## 🔹 Día 5 — Intercambio por Referencia (Swap)
**El Desafío:** Romper el alcance (*scope*) local de una función para modificar variables del `main`.
* **Requerimiento:** Implementar `void swap(int *a, int *b);` sin variables globales.
* **Punto de control:** El intercambio debe ocurrir directamente en las direcciones de memoria originales.



---

## 🔹 Día 9 — Persistencia en el Heap (Structs)
**El Desafío:** Gestionar el ciclo de vida de un objeto compuesto fuera de la pila (*stack*).
* **Misión:** Reservar espacio para una `Persona` con `malloc`, inicializarla en una función externa y asegurar que los datos persisten al regresar al `main`.
* **Clave:** Dominar el operador flecha (`->`) para la manipulación de miembros.

---

## 🔹 Día 11 — Estrategia de Redimensionamiento (Vector)
**El Desafío:** Implementar un arreglo dinámico que gestione su propia capacidad física.
* **Lógica:** Iniciar con capacidad **2**. Al llenarse, duplicar con `realloc`.
* **Seguridad:** Implementar un puntero temporal para capturar el retorno de `realloc` y evitar fugas si la memoria no puede asignarse.



---

## 🔹 Día 13 — Abstracción de Datos Dinámicos
**El Desafío:** Escalar estructuras complejas. Es el paso previo a la gestión de hilos.
* **Misión:** Crear un arreglo dinámico de estructuras `Persona`.
* **Punto de control:** Garantizar que cada movimiento de memoria (`realloc`) mantenga la integridad de los datos de todas las estructuras almacenadas.

---

## ✔️ Criterios de Dominio Funcional
1.  **Seguridad de Memoria:** Cero *Memory Leaks* (comprobado idealmente con Valgrind).
2.  **Aritmética de Punteros:** Comprensión clara de cómo se indexa la memoria dinámica.
3.  **Manejo de Errores:** Verificación de punteros `NULL` tras cada reserva.
4.  **Concepto de Propiedad:** Saber exactamente qué función es responsable de liberar (`free`) cada bloque.
