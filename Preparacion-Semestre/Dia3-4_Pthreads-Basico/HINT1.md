HINT1 - Día 3-4 (Pthreads Básico) - Pista conceptual

- Timebox recomendado antes de abrir HINT2: 30-45 minutos.
- Idea clave: un thread ejecuta una función que recibe un `void*` argumento; dentro de la función conviertes ese argumento al tipo que hayas decidido usar.
- Piensa cómo representar el identificador del thread: un entero, o un puntero a una estructura si necesitas más datos.
- No olvides usar `pthread_join` para esperar a los threads desde el main.

