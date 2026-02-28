# Día 3-4: Pthreads Básico

**Fecha:** 2-3 Marzo  
**Tiempo:** 4-5 horas  
**Objetivo:** Crear y manejar threads básicos

---

## Archivos

1. `01_concepto.md` - Teoría de threads
2. `02_ejercicio_hello_threads.c` - Ejercicio básico
3. `03_solucion_hello_threads.c` - Solución
4. `04_ejercicio_multiples.c` - Ejercicio con N threads
5. `05_solucion_multiples.c` - Solución

---

## Compilación Especial

```bash
# IMPORTANTE: Usar -pthread
gcc -pthread -Wall -Wextra -g -o programa archivo.c

# Ejecutar
./programa

# Verificar
valgrind --leak-check=full ./programa
```

---

## Checklist

- [ ] pthread_create() funciona
- [ ] pthread_join() funciona
- [ ] Paso argumentos correctamente
- [ ] Entiendo ejecución concurrente
- [ ] No hay memory leaks

Abre: `01_concepto.md`

