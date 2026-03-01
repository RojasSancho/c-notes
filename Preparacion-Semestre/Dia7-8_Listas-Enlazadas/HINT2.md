HINT2 - Día 7-8 (Listas Enlazadas) - Pista concreta

- Ejemplo (conceptual):
  - crear_nodo: reserva memoria, asigna dato, siguiente = NULL
  - insertar_inicio: nuevo->siguiente = *cabeza; *cabeza = nuevo;
- Para liberar, recorre liberando cada nodo con free().
- Si vas a usar la lista desde múltiples threads, ten en cuenta que la inserción concurrente requiere sincronización.

