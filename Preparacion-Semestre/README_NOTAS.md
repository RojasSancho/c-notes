# Preparacion-Semestre — Notas y protocolo de práctica

Este README contiene las reglas y comandos para practicar los ejercicios antes del curso de Programación Paralela y Concurrente.

## Objetivo
Material de preparación para que los ejercicios sean una fuente de práctica activa. Intenta resolver primero y usa las pistas (`HINT*.md`) sólo cuando te atasques.

## Política de hints
- `HINT1.md`: pista conceptual (abrir tras 30–45 min de intento).
- `HINT2.md`: pista más concreta (abrir tras otros 20–30 min si sigues atascado).
- `HINT3.md`: pista avanzada si existe.
- `03_solucion_*.c`: abrir sólo como último recurso.

## Estructura
- `DiaX_Y/` por día con `01_concepto.md`, `02_ejercicio_*.c`, `03_solucion_*.c`, `HINT1.md`, `HINT2.md`, `README.md`.
- `inputs/`: archivos de entrada de ejemplo para ejecutar ejercicios automáticamente.

## Comandos útiles
- Compilar (serial):

```bash
gcc -Wall -Wextra -g -o prog file.c
```

- Compilar (pthreads):

```bash
gcc -pthread -Wall -Wextra -g -o prog file.c
```

- Ejecutar con input:

```bash
./prog < inputs/01_array_input.txt
```

- Ejecutar varias veces (ver nondeterminismo):

```bash
for i in {1..20}; do ./prog; done
```

- Valgrind (memoria):

```bash
valgrind --leak-check=full ./prog
```

## Inputs disponibles
- `inputs/01_array_input.txt` — ejemplo para el ejercicio del array dinámico (n + n números).
- `inputs/02_multiples_input.txt` — ejemplo para ejercicio de N threads (una línea: número de threads).
- `inputs/03_integrador_input.txt` — ejemplo para el integrador (línea1: n threads, línea2: inserciones por thread).

## Checklist diario (corta)
- Leer `01_concepto.md` (10–20 min).
- Intentar `02_ejercicio_*.c` (45–90 min).
- Si atascado: abrir `HINT1.md` → 20–30 min → `HINT2.md` si necesario.
- Ejecutar valgrind si el ejercicio usa malloc.
- Documentar tiempo y dudas en el `README.md` del día.

## Buena práctica
- No subir ejecutables al repo (ya ignorados por `.gitignore`).
- Si quieres experimentar sin afectar `main`, crea una rama `prep-9days`.
- Mantén un `NOTES.md` por día con errores y preguntas para revisar en clase.

Si quieres que añada scripts (`run_all_tests.sh` o `repeat_run.sh`) dímelo y los creo.

