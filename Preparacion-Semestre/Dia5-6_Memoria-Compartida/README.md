# Día 5-6: Memoria Compartida

**Objetivo:** Entender race conditions

## Archivos (por crear)
- `01_concepto.md` - Qué son race conditions
- `02_ejercicio_race.c` - Ver el problema en acción
- `03_solucion_race.c` - Código completo

## Compilación
```bash
gcc -pthread -Wall -Wextra -g -o programa archivo.c
```

Ver cómo múltiples threads interfieren al acceder memoria compartida sin protección.

