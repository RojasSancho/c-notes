# Día 9: Repaso y Consolidación

**Objetivo:** Revisar todo lo aprendido y prepararte mentalmente para el curso

---

## Checklist: ¿Dominas Todo?

### Memoria Dinámica (Día 1-2)
- [ ] Entiendo qué es malloc
- [ ] Entiendo qué es free
- [ ] Valido NULL después de malloc
- [ ] Puedo crear arrays dinámicos
- [ ] Puedo crear structs dinámicos
- [ ] Uso valgrind correctamente
- [ ] No tengo memory leaks en mis programas

### Pthreads (Día 3-4)
- [ ] Entiendo pthread_create
- [ ] Entiendo pthread_join
- [ ] Puedo pasar argumentos a threads
- [ ] Sé que threads son impredecibles (orden diferente)
- [ ] Entiendo por qué necesito pthread_join
- [ ] Compilé correctamente con -pthread
- [ ] Puedo crear N threads dinámicamente

### Memoria Compartida (Día 5-6)
- [ ] Entiendo qué es una race condition
- [ ] Sé que contador++ es 3 operaciones
- [ ] Vi resultados diferentes al ejecutar varias veces
- [ ] Entiendo por qué ocurren las race conditions
- [ ] Sé que la solución es synchronization (próximamente)

### Listas Enlazadas (Día 7-8)
- [ ] Entiendo la estructura Nodo
- [ ] Puedo crear nodos con malloc
- [ ] Puedo insertar al inicio
- [ ] Puedo recorrer la lista
- [ ] Puedo liberar toda la lista
- [ ] No tengo memory leaks
- [ ] Entiendo punteros a punteros (**)

---

## Si NO Checklist Todo

**Para cada concepto que NO dominas:**

1. Relee el concepto (01_concepto.md)
2. Intenta el ejercicio de nuevo
3. Compara con la solución
4. Modifica el código y experimenta
5. Usa valgrind para verificar

**No pasesde un concepto a otro sin dominarlo.**

---

## Ejercicio Integrador

Crea un programa que combine TODO:

```
Requisitos:
1. Crear un array dinámico de Nodos (memoria dinámica)
2. Crear 3 threads (pthreads)
3. Cada thread inserta datos en la lista (memoria compartida)
4. Imprimir la lista (sin race conditions, solo viendo el problema)
5. Liberar la lista (sin memory leaks)

Este ejercicio combina Día 1-2 + 3-4 + 5-6 + 7-8
```

**No tienes que "arreglar" las race conditions. Solo verlas.**

---

## Antes del Curso

### Mental
- Descansa bien estos últimos 2 días
- Duele bien el día anterior
- Come algo ligero la mañana del curso
- Llega 10 minutos antes

### Técnico
- Asegúrate de que gcc está instalado
- Asegúrate de que valgrind está instalado
- Practica compilar con flags correctos
- Entiende los comandos básicos

### Emocional
- No te preocupes si no dominas TODOS los detalles
- El profesor enseña desde cero
- Llegaste con 70% - eso es EXCELENTE
- Habrá muchos compañeros menos preparados que tú

---

## Comandos a Recordar

```bash
# Compilación normal
gcc -Wall -Wextra -g -o programa programa.c

# Compilación con pthreads
gcc -pthread -Wall -Wextra -g -o programa programa.c

# Verificar memoria
valgrind --leak-check=full ./programa

# Ejecutar múltiples veces (para ver race conditions)
for i in {1..10}; do ./programa; done
```

---

## Próximo Paso

Haz el ejercicio integrador. Luego, **descansa.**

El curso comienza mañana. Estás listo. 🚀

