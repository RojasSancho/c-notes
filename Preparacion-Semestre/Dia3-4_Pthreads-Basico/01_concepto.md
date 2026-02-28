# Concepto: Pthreads Básico

## El Problema

Hasta ahora tu código corre **secuencialmente**: una instrucción después de otra.

```c
// Esto corre línea por línea, una por una
printf("Función A\n");
printf("Función B\n");
printf("Función C\n");
```

**Problema:** ¿Y si quieres que A, B y C corran **al mismo tiempo** (concurrentemente)?

Ahí entran los **threads** (hilos).

---

## Qué es un Thread

Un **thread** es un **flujo de ejecución independiente dentro del mismo programa**.

**Analogía:**
- **Proceso:** Una fábrica
- **Thread:** Un trabajador en la fábrica
- Múltiples threads = múltiples trabajadores haciendo cosas al mismo tiempo

```c
// Sin threads (secuencial)
Tarea A -> Tarea B -> Tarea C
(tiempo total: A + B + C)

// Con threads (concurrente)
Thread 1: Tarea A
Thread 2: Tarea B      } Ocurren al mismo tiempo
Thread 3: Tarea C
(tiempo total: máximo de (A, B, C))
```

---

## pthread_create(): Crear un Thread

```c
int pthread_create(pthread_t *thread,
                   const pthread_attr_t *attr,
                   void *(*start_routine) (void *),
                   void *arg);
```

**¿Qué hace?**
- Crea un nuevo thread que ejecutará `start_routine`
- Retorna 0 si éxito, distinto de 0 si error

**Parámetros:**
- `thread`: Puntero a variable pthread_t (guarda el ID del thread)
- `attr`: Atributos (NULL = defaults)
- `start_routine`: Función que ejecutará el thread
- `arg`: Argumento para pasar a esa función

**Ejemplo:**
```c
pthread_t thread1;

// Crear thread que ejecute "mi_funcion" con argumento 42
pthread_create(&thread1, NULL, mi_funcion, (void *)42);
```

---

## pthread_join(): Esperar un Thread

```c
int pthread_join(pthread_t thread, void **retval);
```

**¿Qué hace?**
- **Espera** a que el thread termine
- **Bloquea** tu programa hasta que el thread complete
- Retorna 0 si éxito

**Parámetro:**
- `thread`: El thread a esperar
- `retval`: Puntero al valor que retorna el thread (NULL = no queremos)

**Ejemplo:**
```c
pthread_join(thread1, NULL);  // Esperar a que thread1 termine
printf("Thread1 terminó\n");
```

---

## Función de Thread

Una función para un thread tiene esta firma:

```c
void *nombre_funcion(void *arg) {
    // arg es el argumento pasado a pthread_create
    // void * = puntero genérico
    
    // ... hacer trabajo ...
    
    return NULL;  // O un puntero a un resultado
}
```

**Ejemplo:**
```c
void *hola_mundo(void *argumento) {
    int numero = (int)argumento;
    printf("Hola desde thread %d\n", numero);
    return NULL;
}
```

---

## Patrón Completo

```c
#include <pthread.h>
#include <stdio.h>

void *mi_funcion(void *arg) {
    int numero = (int)arg;
    printf("Thread %d ejecutando\n", numero);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    // 1. Crear threads
    pthread_create(&thread1, NULL, mi_funcion, (void *)1);
    pthread_create(&thread2, NULL, mi_funcion, (void *)2);
    
    // 2. Esperar a que terminen
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("Todos los threads terminaron\n");
    return 0;
}
```

**Compilación:**
```bash
gcc -pthread -o programa programa.c
```

**Salida esperada:**
```
Thread 1 ejecutando
Thread 2 ejecutando
Todos los threads terminaron
```

**Nota:** El orden de "Thread 1" y "Thread 2" puede variar (son concurrentes).

---

## Puntos Clave

### 1. void * (Puntero Genérico)

Los threads usan `void *` para pasar argumentos/retornos:

```c
// Pasar int
int numero = 5;
pthread_create(&thread, NULL, funcion, (void *)numero);
//                                       ^casteo importante

// Pasar struct
Persona *p = malloc(sizeof(Persona));
pthread_create(&thread, NULL, funcion, (void *)p);
```

### 2. Orden Impredecible

Los threads son **concurrentes**, así que:
```
Thread 1: printf("A");
Thread 2: printf("B");
```

Puede output: AB, BA, o incluso entrelazado: A B o B A

**Esto es NORMAL y ESPERADO.**

### 3. Sin pthread_join()

Si NO esperas con `pthread_join()`:

```c
pthread_create(&thread, NULL, funcion, NULL);
// ❌ Si sale del main, el thread se termina sin completar
```

El thread nunca termina de ejecutarse. **SIEMPRE** usa `pthread_join()`.

---

## ¿Por Qué Necesitas Esto?

En **Programación Paralela y Concurrente**:

1. Los threads son la **base del curso**
2. Necesitas entender creación y sincronización
3. Después agregarás **mutex** para proteger datos compartidos
4. Después aprenderás **patrones** más complejos

**Este es el primer paso.**

---

## Resumen

| Función | Propósito |
|---------|-----------|
| `pthread_create()` | Crear un nuevo thread |
| `pthread_join()` | Esperar a que un thread termine |
| `void *` | Pasar/retornar datos genéricos |
| `-pthread` | Flag de compilación requerido |

---

## Reglas de Oro

1. **Por cada `pthread_create()`, un `pthread_join()`**
2. **Usa `-pthread` al compilar**
3. **Los threads son impredecibles** (buen signo)
4. **Siempre valida retornos** (verifica que no sea NULL)

---

## Próximo Paso

Ahora abre `02_ejercicio_hello_threads.c` y **completa el código tú mismo**.

**Recuerda:** No mires la solución todavía.

