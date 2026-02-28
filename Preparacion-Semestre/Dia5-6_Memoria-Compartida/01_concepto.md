# Concepto: Memory Compartida y Race Conditions

## El Problema Actual

Hasta ahora cada thread hace su propio trabajo. Pero...

**¿Qué pasa si dos threads acceden a la MISMA memoria?**

```c
int contador = 0;  // Variable compartida

// Thread 1
for (int i = 0; i < 100000; i++) {
    contador++;
}

// Thread 2
for (int i = 0; i < 100000; i++) {
    contador++;
}

// ¿Cuál es el valor final de contador?
// Esperado: 200000
// Real: ???  (probablemente menos)
```

---

## Race Condition

Una **race condition** ocurre cuando:
1. Múltiples threads acceden a la **misma variable**
2. **Sin sincronización**
3. Causando **resultados impredecibles**

**¿Por qué sucede?**

`contador++` internamente es TRES operaciones:

```
1. LEER:   temp = contador       (por ejemplo, temp = 5)
2. SUMAR:  temp = temp + 1        (ahora temp = 6)
3. ESCRIBIR: contador = temp      (contador = 6)
```

**Cuando dos threads lo hacen simultáneamente:**

```
Thread 1                Thread 2
LEER (contador=5)      
SUMAR (temp=6)
                       LEER (contador=5)  ← ¡Lee el valor anterior!
ESCRIBIR (contador=6)
                       SUMAR (temp=6)
                       ESCRIBIR (contador=6)  ← Sobrescribió

Resultado: contador = 6 (se perdió un incremento)
Esperado: contador = 7
```

---

## Ejemplo Visual

Imagina que contador comienza en 0:

**Sin sincronización:**
```
Thread 1: LEER(0) -> SUMAR -> ESCRIBIR(1)
Thread 2:                      LEER(0) -> SUMAR -> ESCRIBIR(1)
                               
Resultado: 1 (¡perdimos un incremento!)
```

**Con sincronización (con mutex - lo aprenderás después):**
```
Thread 1: LOCK -> LEER(0) -> SUMAR -> ESCRIBIR(1) -> UNLOCK
Thread 2:                                           LOCK -> LEER(1) -> SUMAR -> ESCRIBIR(2) -> UNLOCK

Resultado: 2 (correcto)
```

---

## Por Qué es Difícil de Detectar

```c
int contador = 0;

// Corre 1000 veces y obtendrás resultados DIFERENTES
for (int test = 0; test < 1000; test++) {
    contador = 0;
    
    // Crear threads...
    // Esperar threads...
    
    printf("Test %d: contador = %d\n", test, contador);
    // Algunos dirán: 200000
    // Otros dirán: 187432
    // Otros dirán: 195681
    // Etc.
}
```

**El bug NO siempre ocurre.** Es impredecible.

---

## Cómo Detectar

**Ejecutar muchas veces:**

```bash
for i in {1..10}; do ./programa; done
```

Si obtienes resultados DIFERENTES, probablemente tienes una race condition.

---

## Solución: Sincronización (Próximamente)

En el curso aprenderás:

1. **Mutex** - Bloquea acceso a la variable
2. **Semáforos** - Controla acceso a recursos
3. **Variables de condición** - Sincronización avanzada

Por ahora, solo necesitas **entender el problema**.

---

## Por Qué Necesitas Esto

En el curso:

1. **Week 1:** Entiendes las race conditions
2. **Week 2:** Aprendes mutex para solucionarlas
3. **Week 3+:** Patrones más complejos

Primero debes ver el problema para apreciar la solución.

---

## Resumen

| Concepto | Significado |
|----------|------------|
| Memoria compartida | Múltiples threads acceden la misma variable |
| Race condition | Resultados impredecibles por acceso no sincronizado |
| Interleaving | Instrucciones de threads se ejecutan en orden impredecible |
| Sincronización | Mecanismo para controlar acceso (mutex, semáforos) |

---

## Próximo Paso

Ahora abre `02_ejercicio_race_condition.c` para **VER el problema en acción**.

No debes "arreglarlo" todavía. Solo verlo.

