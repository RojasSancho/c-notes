# Día 1-2: Memoria Dinámica

**Fecha:** 28 Febrero - 1 Marzo  
**Tiempo estimado:** 4-5 horas total  
**Objetivo:** Dominar malloc/free sin memory leaks

---

## Qué Harás Hoy

1. Aprender el concepto de memoria dinámica
2. Practicar con arrays dinámicos
3. Practicar con structs dinámicos
4. Usar valgrind para verificar memory leaks

---

## Orden de Estudio

### 1. Lee el Concepto (10-15 min)
📖 Archivo: `01_concepto.md`

Entiende:
- ¿Qué es malloc?
- ¿Por qué usar memoria dinámica?
- ¿Cómo funciona free?
- ¿Qué es un memory leak?

### 2. Ejercicio: Array Dinámico (45-60 min)
💻 Archivo: `02_ejercicio_array.c`

**TU TAREA:**
- Completar el código donde dice `// TODO:`
- Compilar y ejecutar
- Verificar con valgrind

**NO MIRES** `03_solucion_array.c` hasta que lo intentes

### 3. Compara con la Solución (15 min)
📝 Archivo: `03_solucion_array.c`

- ¿Qué hiciste diferente?
- ¿Por qué la solución es así?
- Copia las mejores prácticas

### 4. Ejercicio: Struct Dinámico (45-60 min)
💻 Archivo: `04_ejercicio_struct.c`

**TU TAREA:**
- Completar el código donde dice `// TODO:`
- Trabajar con structs dinámicos
- Verificar con valgrind

### 5. Compara con la Solución (15 min)
📝 Archivo: `05_solucion_struct.c`

### 6. Experimenta (30-45 min)
- Modifica los programas
- Crea memory leaks intencionalmente
- Verifica con valgrind que los detectas

---

## Comandos del Día

```bash
# Compilar
gcc -Wall -Wextra -g -o array 02_ejercicio_array.c
gcc -Wall -Wextra -g -o struct 04_ejercicio_struct.c

# Ejecutar
./array
./struct

# Verificar memory leaks (CRÍTICO)
valgrind --leak-check=full ./array
valgrind --leak-check=full ./struct
```

---

## Checklist del Día

Al final del día, debes poder:

- [ ] Explicar qué hace malloc()
- [ ] Explicar qué hace free()
- [ ] Crear un array dinámico
- [ ] Crear un struct dinámico
- [ ] Validar NULL después de malloc
- [ ] Liberar memoria correctamente
- [ ] Usar valgrind para verificar leaks
- [ ] Ver "All heap blocks were freed" en valgrind

Si todos están ✅, estás listo para el Día 3-4.

---

## Si Te Atascas

1. Lee los comentarios del código
2. Revisa `01_concepto.md` de nuevo
3. Mira solo UNA parte de la solución
4. Intenta de nuevo

**El atascarse es parte del aprendizaje.** No te rindas inmediatamente.

---

## Próximo Paso

**Comienza ahora:** Abre `01_concepto.md`

