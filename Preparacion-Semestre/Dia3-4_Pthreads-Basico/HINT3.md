HINT3 - Día 3-4 (Pthreads) - Pista avanzada

- Si creas N threads dinámicamente, reserva `pthread_t *threads = malloc(n * sizeof *threads);` y pásalo al crear los threads.
- Para enviar datos por thread usa una estructura si necesitas más de un dato por thread.
- Asegúrate de que los datos que pasas permanecen válidos hasta que el thread los lea (evita pasar punteros a variables locales que cambian).

