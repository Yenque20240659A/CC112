/*
Recorrer un arreglo usando punteros:
Declara un arreglo de 5 enteros e inicialízalo. Usa un puntero para recorrer el
arreglo e imprimir los elementos sin usar índices.
*/

#include <iostream>
using namespace std;

void imprimirArreglo(int *a, int n) {
     for(int i = 0; i < n; ++i) {
        cout << *a << " ";   // arr[i] <> *(arr + i)
        a++;
     }
     cout << endl;
}

int main(){

    int arr[] = {1,2,3,4,5};

    imprimirArreglo(arr, 5);

    return 0;
}