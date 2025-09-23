# Ejercicios: Punteros I 
Completar los siguientes ejercicios guiados para comprender en profundidad el uso de punteros en el lenguaje C++.

## Instrucciones Generales

- Cree una carpera punterosI, nombre cada programa con el   número y nombre de la sección correspondiente (`01-memoria.cpp`, `02-que-es-un-puntero.cpp`, ..., `12-ejercicio1.cpp`,  etc.).
- Puede generar una copia del archivo .md adjunto en donde completará las soluciones a las preguntas planteadas
- Comente su código para explicar lo que está haciendo.
- Realiza commits frecuentes y  push a tu repositorio .

---

## 01. Introducción a la Memoria y Variables

**Objetivo:** Entender cómo se almacenan las variables en memoria y cómo acceder a sus direcciones.

### Ejercicio:

1. Declara tres variables: un `int`, un `float`, y un `char`.
2. Imprime sus valores y sus direcciones de memoria usando `&`.
3. Observa cómo cambian las direcciones si cambias el orden de declaración.
---

## 02. ¿Qué es un Puntero?

**Objetivo:** Comprender qué es un puntero y cómo se relaciona con las direcciones de memoria.

### Ejercicio:

1. Declara una variable `int a = 10;`
2. Declara un puntero `int *p` y haz que apunte a `a`.
3. Imprime el valor de `a` usando `*p` y la dirección con `p`.
---

## 03. Declaración de Punteros
**Objetivo:** Declarar punteros de diferentes tipos.

### Ejercicio:

1. Declara punteros a `int`, `float`, y `char`.
2. Asigna valores a las variables originales.
3. Asocia los punteros a esas variables y muestra valores y direcciones.

---

## 04. Operadores de Referencia (&) y Desreferencia (*)

**Objetivo:** Usar `&` y `*` correctamente.

### Ejercicio:

1. Escribe una función que reciba un puntero a `int` y lo modifique (e.g., lo multiplique por 2).
2. En `main`, declara una variable, pasa su dirección a la función, y verifica el cambio.

---

## 05. Puntero a Puntero (Doble Puntero)

**Objetivo:** Comprender el uso de dobles punteros.

### Ejercicio:

1. Declara un `int`, un `int *`, y un `int **`.
2. Asigna los valores de forma encadenada y muestra el contenido final usando `**`.
---

## 06. Punteros y Cadenas de Caracteres

**Objetivo:** Entender cómo funcionan los punteros con `char[]` y `char *`.

### Ejercicio:

1. Declara una cadena como arreglo (`char saludo[] = "Hola";`) y como puntero (`char *saludo2 = "Hola";`).
2. Imprime letra por letra usando aritmética de punteros (`*(saludo + i)`).
3. ¿Qué pasa si intentas modificar una letra en cada caso?

---

## 07. Punteros Nulos y Buenas Prácticas

**Objetivo:** Prevenir errores al usar punteros no inicializados.

### Ejercicio:

1. Declara un puntero sin inicializar. ¿Qué pasa si haces `*p = 5;`?
2. Usa `nullptr` correctamente antes de asignar una dirección válida.
3. Escribe una función segura que verifique si un puntero es `nullptr` antes de usarlo.

---

## 08. Puntero y Arreglos Unidimensionales

**Objetivo:** Usar punteros para acceder y modificar arreglos.

### Ejercicio:

1. Declara un arreglo de 5 enteros.
2. Usa un puntero para recorrerlo y modificar sus valores.
3. Imprime el arreglo antes y después del cambio.

---

## 09. Aritmética de Punteros

**Objetivo:** Comprender cómo se mueven los punteros en memoria.

### Ejercicio:

1. Declara un arreglo de enteros con valores del 1 al 5.
2. Declara un puntero que apunte al inicio del arreglo.
3. Usa `p + 1`, `p + 2`, etc., para imprimir los diferentes elementos.
4. ¿Qué sucede si haces `*(p + 5)`?

---


## 10. Eficiencia en el uso de Punteros

**Objetivo:** Comprender la diferencia de eficiencia entre pasar un arreglo por copia (por valor) y pasarlo por referencia (mediante puntero).

---

### Ejercicio

1. Declara un arreglo de 1000 enteros y llénalo con valores aleatorios entre 1 y 100.
2. Implementa dos funciones que modifiquen todos los elementos del arreglo:
   - Una que reciba el arreglo por **copia** (simulando copia con `std::memcpy` si es necesario).
   - Otra que reciba un **puntero al arreglo** (o una referencia en C++).
3. Usa `std::chrono` para medir el tiempo de ejecución de cada función.
4. Compara los resultados y responde:  
   ¿Qué versión es más rápida?  
   ¿Por qué?

---

```cpp
// Use los siguientes prototipos
void modificarPorPuntero(int* arr, size_t size);
void modificarPorCopia(int arr[], size_t size); // se simula copia dentro de la función
```
---

## 11. Referencias vs Punteros

**Objetivo:** Comprender las diferencias fundamentales entre **referencias** y **punteros** en C++, y cuándo usar cada uno.

---

### Ejercicio

1. Escribe una función que reciba un entero por **referencia** y lo modifique.
2. Escribe otra función que reciba un puntero a entero y también lo modifique.
3. En `main()`, llama a ambas funciones con variables distintas y muestra los resultados.
4. Agrega comentarios explicando las diferencias observadas entre pasar por referencia y por puntero.
5. Discute las ventajas y desventajas de cada forma de pasar argumentos.

---

```cpp
// Prototipos segeridos
void modificarPorReferencia(int& ref);
void modificarPorPuntero(int* ptr);
```


## 12. Ejercicios adicionales

**Objetivo:** Reforzar el uso de punteros en C++, combinándolos con problemas clásicos de programación que requieren lógica, manipulación de datos y pensamiento algorítmico.

---

### 1. Inversión de cadena (sin índices)
Crea una función que reciba un `char*` y modifique la cadena original para que quede invertida.  
> Ejemplo: `"hola"` → `"aloh"`

Requisitos:
- No usar corchetes `[]`.
- Usar únicamente aritmética de punteros.

---

### 2. Palíndromo con punteros

Escribe una función que verifique si una cadena de caracteres es un palíndromo (se lee igual de atrás hacia adelante).  
> Ejemplo: `"reconocer"` → `true`

Restricciones:
- No usar índices.
- Usa dos punteros que recorran la cadena desde los extremos.

---

### 3. Contar ocurrencias de un carácter
Crea una función que cuente cuántas veces aparece un carácter dado en una cadena usando punteros.

```cpp
// Prototipo sugerido
int contarCaracter(const char* str, char objetivo);
```
### 4. Buscar subcadena (implementación de strstr)
Escribe una función que busque si una subcadena está contenida dentro de otra cadena, usando únicamente punteros.

"estamos" contiene "amo" → posición 3
"estamos" no contiene "zzz" → -1

### 5. Eliminar espacios de una cadena (in-place)
Escribe una función que elimine todos los espacios de una cadena (char*) modificándola in-place.

"e j e r c i c i o" → "ejercicio"

### 6. Reemplazar caracteres
Implementa una función que reemplace todas las apariciones de un carácter por otro dentro de una cadena, usando punteros.

```cpp
// Prototipo sugerido
void reemplazar(char* str, char viejo, char nuevo);
```

### 7. Comparación de cadenas (sin strcmp)
Escribe una función que compare dos cadenas (char*) carácter por carácter utilizando punteros.

Debe devolver:

0 si son iguales

-1 si la primera es menor

1 si la primera es mayor

### 8. Copia de cadena (sin strcpy)
Escribe una función que copie el contenido de una cadena a otra usando punteros.


```cpp
// Prototipo sugerido
void copiarCadena(char* destino, const char* origen);
```
### 9. Comprimir caracteres consecutivos (tipo RLE)
Crea una función que comprima una cadena repitiendo los caracteres seguidos junto a su cantidad.

Ejemplo: "aaabbccccd" → "a3b2c4d1"

Solo usa punteros (ni índices ni librerías de manipulación de strings).

---

