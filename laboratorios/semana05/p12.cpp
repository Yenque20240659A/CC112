/*
Búsqueda lineal con punteros
Implementa una función que recorra un arreglo con punteros y retorne la
dirección del primer elemento que sea igual a un valor dado (si existe), o nullptr
en caso contrario.
*/


#include <iostream>
using namespace std;

int* busquedaLineal(int *arr, int n, int valor) {
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) == valor) {
            return (arr + i);
        }
    }
    return nullptr;
}

int main(){

    int arr[] = {1,2,3,4,5,0};
    int valor = 7;
    
    int * resultado = busquedaLineal(arr, 6, valor);

    if (resultado ==  nullptr) {
        cout << "El valor " << valor << " No se encuentra en el arreglo" <<endl;
    } else {
        cout << "El valor " << valor << " Se encuentra en el arreglo en la dirección  " << resultado <<endl;
    }

    return 0;
}