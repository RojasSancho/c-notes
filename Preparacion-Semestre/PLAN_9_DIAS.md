# Plan de Preparación - 9 Días para el Semestre

**Fecha de inicio:** 28 de Febrero, 2026  
**Fecha del curso:** 9 de Marzo, 2026  
**Tiempo disponible:** 9 días

---

## Objetivo

Estar completamente preparado para el curso de **Programación Paralela y Concurrente** sin que el lenguaje C sea un obstáculo.

---

## Estructura de Preparación

### Día 1-2: Memoria Dinámica (28 Feb - 1 Mar)
**Carpeta:** `Dia1-2_Memoria-Dinamica/`  
**Tiempo:** 4-5 horas total

**Aprenderás:**
- malloc() y free()
- Validación de NULL
- Detección de memory leaks con valgrind
- Arrays dinámicos
- Structs dinámicos

**Archivos:**
- `README.md` - Guía del día
- `01_concepto.md` - Explicación teórica
- `02_ejercicio_array.c` - Ejercicio para completar
- `03_solucion_array.c` - Solución completa
- `04_ejercicio_struct.c` - Ejercicio para completar
- `05_solucion_struct.c` - Solución completa

---

### Día 3-4: Pthreads Básico (2 Mar - 3 Mar)
**Carpeta:** `Dia3-4_Pthreads-Basico/`  
**Tiempo:** 4-5 horas total

**Aprenderás:**
- pthread_create()
- pthread_join()
- Paso de argumentos a threads
- Ejecución concurrente

**Archivos:**
- `README.md` - Guía del día
- `01_concepto.md` - Explicación teórica
- `02_ejercicio_hello_threads.c` - Ejercicio para completar
- `03_solucion_hello_threads.c` - Solución completa
- `04_ejercicio_multiples.c` - Ejercicio avanzado
- `05_solucion_multiples.c` - Solución completa

---

### Día 5-6: Memoria Compartida (4 Mar - 5 Mar)
**Carpeta:** `Dia5-6_Memoria-Compartida/`  
**Tiempo:** 3-4 horas total

**Aprenderás:**
- Race conditions (el problema)
- Por qué necesitas sincronización
- Mutex (conceptualmente)
- Variables compartidas entre threads

**Archivos:**
- `README.md` - Guía del día
- `01_concepto.md` - Explicación teórica
- `02_ejercicio_race_condition.c` - Ver el problema
- `03_solucion_race_condition.c` - Solución completa

---

### Día 7-8: Listas Enlazadas (6 Mar - 7 Mar)
**Carpeta:** `Dia7-8_Listas-Enlazadas/`  
**Tiempo:** 4-5 horas total

**Aprenderás:**
- Nodos dinámicos
- Inserción y eliminación
- Recorrido de lista
- Liberación de memoria

**Archivos:**
- `README.md` - Guía del día
- `01_concepto.md` - Explicación teórica
- `02_ejercicio_lista.c` - Ejercicio para completar
- `03_solucion_lista.c` - Solución completa
- `04_ejercicio_pila.c` - Ejercicio adicional
- `05_solucion_pila.c` - Solución completa

---

### Día 9: Repaso (8 Mar)
**Carpeta:** `Dia9_Repaso/`  
**Tiempo:** 3-4 horas total

**Harás:**
- Repasar temas débiles
- Ejercicio integrador
- Verificar que todo compila
- Prepararse mentalmente para el curso

**Archivos:**
- `README.md` - Guía del día
- `01_checklist.md` - Verificar que dominas todo
- `02_ejercicio_integrador.c` - Combina todos los conceptos

---

## Cómo Usar Este Material

### Metodología de Aprendizaje Activo

**IMPORTANTE:** No solo leas las soluciones. Aprende haciéndolo tú mismo.

#### Proceso para cada día:

1. **Lee el concepto** (`01_concepto.md`)
   - Entiende QUÉ vas a hacer
   - Entiende POR QUÉ lo necesitas

2. **Trabaja en el ejercicio** (`02_ejercicio_*.c`)
   - **NO mires la solución todavía**
   - Intenta completar el código tú mismo
   - Está bien atascarse, es parte del aprendizaje

3. **Compila y prueba**
   ```bash
   gcc -Wall -Wextra -g -o programa ejercicio.c
   # O para pthreads:
   gcc -pthread -Wall -Wextra -g -o programa ejercicio.c
   ```

4. **Compara con la solución** (`03_solucion_*.c`)
   - Revisa qué hiciste diferente
   - Entiende por qué la solución es así

5. **Verifica con valgrind**
   ```bash
   valgrind --leak-check=full ./programa
   ```

6. **Modifica y experimenta**
   - Cambia valores
   - Agrega funcionalidad
   - Rompe el código intencionalmente

---

## Comandos Importantes

### Compilación

```bash
# Para programas normales
gcc -Wall -Wextra -g -o programa archivo.c

# Para programas con pthreads (IMPORTANTE: -pthread)
gcc -pthread -Wall -Wextra -g -o programa archivo.c

# Para usar valgrind
valgrind --leak-check=full ./programa
```

### Git

```bash
# Ver en qué rama estás
git branch

# Volver a main
git checkout main

# Volver a preparacion-9dias
git checkout preparacion-9dias

# Ver cambios
git status
```

---

## Estimación de Tiempo

| Días | Tema | Horas |
|------|------|-------|
| 1-2 | Memoria Dinámica | 4-5h |
| 3-4 | Pthreads Básico | 4-5h |
| 5-6 | Memoria Compartida | 3-4h |
| 7-8 | Listas Enlazadas | 4-5h |
| 9 | Repaso | 3-4h |
| **Total** | | **18-23h** |

**Promedio:** 2-2.5 horas por día durante 9 días

---

## Lo Que Lograrás

Después de estos 9 días, podrás:

✅ Usar malloc/free sin memory leaks  
✅ Crear threads con pthreads  
✅ Entender qué es una race condition  
✅ Implementar listas enlazadas  
✅ Usar valgrind correctamente  
✅ Compilar con los flags correctos  

**Esto representa ~70% de lo necesario para el curso.**

El profesor enseñará mutex, semáforos, OpenMP, MPI, etc. desde cero.

---

## Consejos Finales

1. **Practica escribiendo, no solo leyendo**
2. **Usa valgrind en cada programa**
3. **No tengas miedo de cometer errores**
4. **Pregunta en clase cuando tengas dudas**
5. **Descansa bien antes del curso**

---

## Próximo Paso

**Comienza ahora:** Abre `Dia1-2_Memoria-Dinamica/README.md`

¡Éxito! 🚀

