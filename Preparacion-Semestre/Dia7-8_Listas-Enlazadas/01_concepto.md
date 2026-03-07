# Concepto: Listas Enlazadas

## Recordatorio: Arrays vs Listas

**Array dinámico (que ya sabes):**
```c
int *array = malloc(10 * sizeof(int));
// Acceso rápido: array[5]
// Pero tamaño FIJO: 10 elementos
```

**Lista enlazada (lo nuevo):**
```c
struct Nodo {
    int dato;
    struct Nodo *siguiente;
};
// Tamaño DINÁMICO: crece/shrink
// Pero acceso lento: debe ir nodo por nodo
```

---

## Estructura de Nodo

```c
typedef struct Nodo {
    int dato;              // Datos
    struct Nodo *siguiente; // Puntero al siguiente nodo
} Nodo;

Nodo nodo1;
nodo1.dato = 10;
nodo1.siguiente = NULL;
```

**Visualización:**
```
nodo1
┌──────────────┐
│ dato: 10     │
│ siguiente: ●─┼─→ (NULL)
└──────────────┘
```

---

## Crear un Nodo

```c
Nodo *crear_nodo(int dato) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;
    
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    
    return nuevo;
}
```

---

## Insertar al Inicio

```c
void insertar_inicio(Nodo **cabeza, int dato) {
    Nodo *nuevo = crear_nodo(dato);
    if (nuevo == NULL) return;
    
    nuevo->siguiente = *cabeza;  // Nuevo apunta al antiguo inicio
    *cabeza = nuevo;              // Actualizar cabeza
}
```

**Visualización antes:**
```
cabeza → nodo1(dato=10) → nodo2(dato=20) → NULL
```

**Visualización después de insertar 5:**
```
cabeza → nodo0(dato=5) → nodo1(dato=10) → nodo2(dato=20) → NULL
```

---

## Recorrer la Lista

```c
void imprimir(Nodo *cabeza) {
    while (cabeza != NULL) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->siguiente;  // Ir al siguiente
    }
    printf("\n");
}
```

---

## Eliminar un Nodo

```c
void eliminar(Nodo **cabeza, int dato) {
    // Caso 1: Eliminar el primero
    if (*cabeza != NULL && (*cabeza)->dato == dato) {
        Nodo *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
        return;
    }
    
    // Caso 2: Eliminar otros
    Nodo *actual = *cabeza;
    while (actual != NULL && actual->siguiente != NULL) {
        if (actual->siguiente->dato == dato) {
            Nodo *temp = actual->siguiente;
            actual->siguiente = temp->siguiente;
            free(temp);
            return;
        }
        actual = actual->siguiente;
    }
}
```

---

## Liberar Toda la Lista

**CRÍTICO:** Debes liberar todos los nodos.

```c
void liberar(Nodo **cabeza) {
    while (*cabeza != NULL) {
        Nodo *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}
```

---

## Patrón Completo

```c
typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

Nodo *crear_nodo(int dato) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

void insertar(Nodo **cabeza, int dato) {
    Nodo *nuevo = crear_nodo(dato);
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}

void imprimir(Nodo *cabeza) {
    while (cabeza != NULL) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}

void liberar(Nodo **cabeza) {
    while (*cabeza != NULL) {
        Nodo *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}

int main() {
    Nodo *lista = NULL;
    
    insertar(&lista, 10);
    insertar(&lista, 20);
    insertar(&lista, 30);
    
    imprimir(lista);  // Salida: 30 20 10
    
    liberar(&lista);
    
    return 0;
}
```

---

## Por Qué Necesitas Esto

En el curso **Programación Paralela**:

1. Las listas se usan para **buffers** en producer-consumer
2. Múltiples threads accederán a la **misma lista**
3. Necesitarás **sincronización** para protegerla
4. Debes entender la estructura ANTES de sincronizarla

---

## Resumen

| Operación      | Operación               |
|----------------|-------------------------|
| `crear_nodo()` | Crear un nodo dinámico  |
| `insertar()`   | Agregar nodo            |
| `eliminar()`   | Remover nodo            |
| `imprimir()`   | Recorrer y mostrar      |
| `liberar()`    | Liberar todos los nodos |

---

## Próximo Paso

Abre `02_ejercicio_lista.c` e **implementa la lista tú mismo**.

