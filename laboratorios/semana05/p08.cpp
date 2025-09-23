/*
Mostrar los valores de un arreglo al revés usando punteros:
Escribe una función que reciba un puntero a un arreglo y lo imprima en orden
inverso sin usar índices
*/

#include <iostream>
using namespace std;


void invertirArreglo(int *ptr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << *(ptr + (n-1) - i) << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1,4, 6, 8, 0, 3};

    invertirArreglo(arr, 6);
    return 0;
}