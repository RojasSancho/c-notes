# Concepto: Memoria Dinámica

## El Problema

Ya sabes usar arrays estáticos:

```c
int numeros[10];  // Tamaño fijo, decidido al compilar
```

**Problema:** ¿Qué pasa si no sabes cuántos elementos necesitas hasta que el programa está ejecutando?

```c
// El usuario decide cuántos elementos quiere
printf("¿Cuántos números? ");
scanf("%d", &n);

int numeros[n];  // ❌ Esto NO es buena práctica en C estándar
```

---

## La Solución: Memoria Dinámica

La **memoria dinámica** te permite reservar memoria **en tiempo de ejecución** (mientras el programa corre).

### Heap vs Stack

**Stack (Pila):**
- Variables locales
- Tamaño fijo
- Se liberan automáticamente al salir de la función
- Ejemplo: `int x = 5;`

**Heap (Montón):**
- Memoria dinámica
- Tamaño variable
- **TÚ** decides cuándo reservar y cuándo liberar
- Ejemplo: `int *ptr = malloc(100);`

---

## malloc(): Reservar Memoria

```c
void *malloc(size_t size);
```

**¿Qué hace?**
- Reserva `size` bytes en el heap
- Retorna un **puntero** a esa memoria
- Retorna **NULL** si falla

**Ejemplo:**
```c
int *array = (int *)malloc(10 * sizeof(int));
//           ^casteo      ^tamaño en bytes
```

**Explicación:**
- `sizeof(int)` = 4 bytes (usualmente)
- `10 * sizeof(int)` = 40 bytes
- `malloc(40)` reserva 40 bytes
- `(int *)` convierte el puntero genérico a puntero de int

---

## free(): Liberar Memoria

```c
void free(void *ptr);
```

**¿Qué hace?**
- Libera la memoria que reservaste con malloc
- **DEBES** llamar free por cada malloc
- Si no lo haces = **MEMORY LEAK** (fuga de memoria)

**Ejemplo:**
```c
int *array = malloc(10 * sizeof(int));
// ... usar array ...
free(array);      // Liberar memoria
array = NULL;     // Buena práctica
```

---

## Memory Leak (Fuga de Memoria)

Un **memory leak** ocurre cuando reservas memoria con malloc pero nunca la liberas con free.

**Problema:**
```c
void funcion() {
    int *ptr = malloc(100);
    // ... usar ptr ...
    // ❌ Olvidé hacer free(ptr)
}  // Al salir, perdiste el puntero pero la memoria sigue reservada
```

**Resultado:**
- Tu programa usa cada vez más memoria
- Eventualmente puede quedarse sin memoria
- Es un **bug muy grave**

---

## Validación de NULL

**SIEMPRE** verifica que malloc no falló:

```c
int *array = malloc(n * sizeof(int));

if (array == NULL) {
    printf("Error: No hay suficiente memoria\n");
    return 1;  // Salir del programa
}

// Ahora es seguro usar array
```

**¿Por qué?**
- Si malloc falla, retorna NULL
- Si intentas usar NULL, el programa se rompe (segmentation fault)

---

## Patrón Completo

```c
// 1. Reservar memoria
int *array = malloc(n * sizeof(int));

// 2. Validar NULL
if (array == NULL) {
    // Manejar el error
    return 1;
}

// 3. Usar la memoria
for (int i = 0; i < n; i++) {
    array[i] = i * 10;
}

// 4. Liberar memoria
free(array);

// 5. Poner NULL (buena práctica)
array = NULL;
```

---

## Valgrind: Detector de Memory Leaks

**Valgrind** es una herramienta que detecta memory leaks.

**Uso:**
```bash
# Compilar con -g (símbolos de debug)
gcc -g -o programa programa.c

# Ejecutar con valgrind
valgrind --leak-check=full ./programa
```

**Salida esperada (sin leaks):**
```
HEAP SUMMARY:
    definitely lost: 0 bytes in 0 blocks

All heap blocks were freed -- no leaks are possible
```

**Salida con leaks:**
```
HEAP SUMMARY:
    definitely lost: 40 bytes in 1 blocks

40 bytes in 1 blocks are definitely lost
```

---

## ¿Por Qué Necesitas Esto para el Curso?

En **Programación Paralela y Concurrente**:

1. Los **threads compartirán memoria dinámica**
2. Necesitas crear estructuras de datos dinámicas
3. Múltiples threads accederán a la misma memoria malloc'd
4. Si no dominas malloc/free, no podrás hacer los ejercicios

**Ejemplo del curso:**
```c
// Thread 1 reserva memoria
int *shared_data = malloc(100 * sizeof(int));

// Thread 2 accede a esa memoria
// Thread 3 accede a esa memoria

// Al final, alguien debe hacer free(shared_data)
```

---

## Resumen

| Concepto | Propósito |
|----------|-----------|
| `malloc()` | Reservar memoria en tiempo de ejecución |
| `free()` | Liberar memoria reservada |
| Validar NULL | Evitar crashes si malloc falla |
| `valgrind` | Detectar memory leaks |
| Memory leak | Bug donde no liberas memoria |

---

## Reglas de Oro

1. **Por cada malloc, un free**
2. **Siempre validar NULL después de malloc**
3. **Usar valgrind en cada programa**
4. **Poner NULL después de free (opcional pero recomendado)**

---

## Próximo Paso

Ahora que entiendes el concepto, abre `02_ejercicio_array.c` y **completa el código tú mismo**.

**Recuerda:** No mires la solución todavía. El aprendizaje viene de intentarlo.

