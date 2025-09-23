/*
Sumar dos números usando una función con punteros:
Escribe una función sumar(int* a, int* b, int* resultado) que reciba dos punteros
a enteros y almacene la suma en la dirección apuntada por resultado
*/

#include <iostream>
using namespace std;

void sumar(int* x, int* y, int* resultado) {
    *resultado = *x + *y;
}

int main(){

    int a = 20;

    int b = 30;

    int suma = 0;

    sumar(&a, &b, &suma);

    cout << suma <<endl;

    return 0;
}