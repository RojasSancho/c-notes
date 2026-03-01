HINT2 - Día 3-4 (Pthreads Básico) - Pista concreta

- Si quieres una forma simple para pasar el id: reserva un array de enteros `int *ids = malloc(n * sizeof *ids);` y guarda `ids[i] = i+1;` y pasa `&ids[i]` a cada thread.
- Dentro del thread, recibe `void *arg` y haz `int id = *(int *)arg;` (si pasas la dirección de un int).
- Otra forma (menor recomendada) es castear enteros a `void*` en plataformas donde esto sea seguro; la forma con puntero a int es portable.
- Recuerda liberar `ids` si lo reservas.

