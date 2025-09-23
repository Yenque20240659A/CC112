/*
Suma y promedio usando funciones con punteros
Declara un arreglo de 10 enteros. Escribe una función que reciba un puntero al
arreglo y su tamaño, y calcule la suma y el promedio. Devuelve ambos valores
usando punteros como parámetros por referencia
*/

#include <iostream>
using namespace std;

void promedioArreglo(int *arr, int n, int *suma, float *promedio) {
    for (int i = 0; i < n; ++i ) {
        *suma += *(arr + i); 
    }
    *promedio = static_cast<float>(*suma) / n;
}

int main(){

    int arr[] = {1,5,4,6,7,8,9,4,3,10};

    int suma = 0;

    float promedio = 0.0;

    promedioArreglo(arr, 10, &suma, &promedio);

    cout << "La suma es: " << suma <<endl;
    cout << "El promedio es: " << promedio <<endl;

    return 0;
}