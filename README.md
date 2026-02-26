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

## Validación de ejercicios dentro del plan de estudio

Los ejercicios obligatorios están ubicados en puntos donde ocurre un cambio real en el modelo mental del lenguaje C. Esto asegura que la práctica consolide comprensión, no solo sintaxis.

---

### Día 5 — Swap por punteros  
Temas del día: paso por referencia, direcciones de memoria  
Motivo pedagógico: primer contacto real con punteros  

✔ Ubicación correcta porque:
- Introduce modificación indirecta de variables
- Obliga a entender qué contiene un puntero
- Marca transición de programación por valor → por referencia

---

### Día 9 — Struct dinámico  
Temas del día: estructuras + vectores de estructuras  
Motivo pedagógico: primer uso significativo de datos compuestos en memoria  

✔ Ubicación correcta porque:
- Combina estructuras con manejo de memoria
- Introduce propiedad de memoria (quién reserva y quién libera)
- Prepara para modelos de datos más complejos

---

### Día 11 — Vector dinámico que crece  
Temas del día: memoria dinámica, `malloc`, `realloc`  
Motivo pedagógico: comprensión real del redimensionamiento en heap  

✔ Ubicación correcta porque:
- Aplica `realloc` en un caso real
- Obliga a manejar capacidad vs tamaño lógico
- Introduce patrones comunes de estructuras dinámicas

---

### Día 13 — Arreglo dinámico de structs  
Temas del día: funciones + memoria dinámica  
Motivo pedagógico: integración completa de conceptos  

✔ Ubicación correcta porque:
- Integra punteros + estructuras + heap
- Simula modelos de datos reales
- Evalúa comprensión global del manejo de memoria

---

## Punto de verificación conceptual recomendado

Antes de iniciar memoria dinámica (Día 11), se debe poder explicar con claridad:

- Diferencia entre pasar valor y pasar dirección
- Qué contiene exactamente una variable puntero
- Diferencia entre memoria automática (stack) y dinámica (heap)
- Por qué modificar a través de punteros cambia el valor original

Si estos conceptos no están claros, se recomienda repasar punteros antes de continuar.


