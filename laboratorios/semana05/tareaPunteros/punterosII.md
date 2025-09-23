# Punteros II
Se recomienda haber trabajado la primera parte antes de iniciar esta.

---

## Instrucciones Generales

- Crea una carpeta punterosII donde colocará sus programas nombrados de acuerdo aa número y nombre de las secciones  (`01-punteros-como-parametros.cpp`, `02-arreglo-de-punteros.cpp`, etc.).
- Puede generar una copia del archivo .md adjunto en donde completará las soluciones a las preguntas planteadas
- Comente su código para explicar lo que está haciendo.
- Realiza commits frecuentes y  push a tu repositorio .
---

## 01. Paso de punteros como parámetros de una función

**Objetivo:** Comprender cómo usar punteros para modificar variables dentro de funciones.

### Ejercicio:

1. Escribe una función `void intercambiar(int *a, int *b)` que intercambie los valores de dos variables.
2. En `main`, pide dos enteros al usuario, llama a la función e imprime los valores antes y después del intercambio.

---

## 02. Arreglo de punteros

**Objetivo:** Usar arreglos de punteros para manejar múltiples cadenas o estructuras.

### Ejercicio:

1. Declara un arreglo de punteros a `char`, con 3 frases distintas.
2. Imprime cada frase y cada carácter usando aritmética de punteros.
3. Escribe una función que reciba este arreglo y cambie la primera letra de cada palabra a mayúscula.

---

## 03. Punteros y matrices

**Objetivo:** Usar punteros para recorrer y modificar matrices (arreglos bidimensionales).

### Ejercicio:

1. Declara una matriz de enteros `3x3`.
2. Llénala con valores del 1 al 9.
3. Escribe una función que use punteros para recorrer la matriz y multiplicar cada valor por 2.
4. Imprime la matriz antes y después.

---

## 04. Prioridad de los operadores `*`, `()`, y `[]`

**Objetivo:** Entender cómo interactúan estos operadores en expresiones complejas.

### Ejercicio:

1. Declara un arreglo de punteros a enteros y un puntero a arreglo de enteros.
2. Escribe expresiones como `*p[i]`, `(*p)[i]`, y `*(p + i)` y explica en comentarios qué hace cada una.
3. Prueba estas expresiones con valores para verificar los resultados.

---

## 05. Puntero `void`, puntero constante

**Objetivo:** Usar punteros genéricos y comprender las restricciones de los punteros constantes.

### Ejercicio:

1. Escribe una función que reciba un puntero `void *` y un tamaño, e imprima los bytes uno por uno.
2. Declara:
   - un `const int *`
   - un `int * const`
   - un `const int * const`
3. Intenta modificar el contenido y/o la dirección, y comenta por qué compila o no.

---

## 06. Funciones que devuelven punteros

**Objetivo:** Entender cómo retornar punteros desde funciones (y sus peligros).

### Ejercicio:

1. Escribe una función que reciba un arreglo y su tamaño, y devuelva un puntero al valor máximo.
2. Escribe otra función que devuelva un puntero a una variable local. ¿Qué pasa?

---

## 07. Punteros a funciones

**Objetivo:** Declarar punteros a funciones y usarlos para invocar funciones de forma dinámica.

### Ejercicio:

1. Declara una función `int suma(int, int)` y otra `int resta(int, int)`.
2. Declara un puntero a función que pueda apuntar a ambas.
3. Usa el puntero para llamar a cada función según un valor ingresado por el usuario.

---

## 08. Funciones que reciben funciones mediante punteros

**Objetivo:** Usar funciones como argumentos de otras funciones (similar a callbacks).

### Ejercicio:

1. Escribe una función `int aplicar(int a, int b, int (*operacion)(int, int))` que reciba otra función como parámetro.
2. Pasa `suma`, `resta`, o cualquier otra función que cumpla la firma.
3. Implementa un pequeño menú que permita al usuario elegir la operación a aplicar sobre dos enteros.

---

## 09 Ejercicios adicionales

**Objetivo:** Utilizar punteros a funciones para desarrollar soluciones flexibles, reutilizables y personalizables, reforzando conceptos de lógica, funciones como parámetros y punteros.

---

###  1. Burbuja Personalizable (ordenamiento dinámico)

Implementa una versión simplificada del algoritmo de **ordenamiento burbuja**, que permita al usuario elegir la forma de comparación a través de un puntero a función:

```cpp
int compararAsc(int a, int b);
int compararDesc(int a, int b);
int compararAbs(int a, int b);
```

Tu función burbuja debe ser de la forma:

```cpp
void ordenar(int arr[], int size, int (*comparar)(int, int));
```

El usuario selecciona el criterio desde un menú.

### 2. Filtro personalizable de arreglos
Crea una función que reciba un arreglo de enteros y un filtro (puntero a función booleana) que determine si un número debe mantenerse o no.

```cpp
bool esPar(int x);
bool esMayorQue10(int x);
```

```cpp
int* filtrar(int* arr, int size, bool (*criterio)(int), int& nuevoTam);
```

Devuelve un nuevo arreglo dinámico con solo los elementos que cumplen el criterio.

### 3. Calculadora con punteros a funciones
Implementa una mini calculadora que ofrezca al usuario 4 operaciones: suma, resta, multiplicación, división

Cada operación debe ser implementada como función, y el menú debe permitir elegir qué función apuntar:

```cpp
int suma(int, int);
int resta(int, int);

int (*operacion)(int, int) = elegirOperacion();
```
Luego, se llama a la función seleccionada dinámicamente con los operandos ingresados.

### 4. Operaciones sobre strings con funciones dinámicas
Define varias operaciones sobre char*:

Convertir a mayúsculas

Convertir a minúsculas

Reemplazar vocales por *

Crea una función general que reciba una operación como puntero a función:

```cpp
void procesarCadena(char* str, void (*operacion)(char*));
```

Permite aplicar la transformación elegida sobre la cadena original.

### 5. Reducción personalizada (tipo reduce)
Implementa una función tipo reduce que tome un arreglo y una operación acumuladora como puntero a función:

```cpp
int sumar(int a, int b);     // acumulador += b
int multiplicar(int a, int b);  // acumulador *= b

int reducir(int* arr, int size, int (*operacion)(int, int), int valorInicial);

```

Prueba con suma, multiplicación y resta.

