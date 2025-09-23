/*
Comparar dos arreglos elemento a elemento:
Escribe una función que reciba dos arreglos del mismo tamaño y compare sus
elementos usando punteros. La función debe retornar true si todos los elementos
son iguales.
*/



#include <iostream>
using namespace std;

bool compararArreglos(int * arr1, int * arr2, int n) {
    for (int i = 0; i < n; ++i) {
        if (*(arr1 + i) != *(arr2 + i) ) {
            return false;
        }
    }

    return true;
}

int main(){

    const int N = 6;

    int arr1[N] = {1,2,3,4,5,6};
    int arr2[N] = {1,2,3,4,5,6};
    int arr3[N] = {1,2,7,4,5,6};

    cout << "Comparando arr1 y arr2\n";
    cout << (compararArreglos(arr1,arr2,N) ? "Son iguales"  : "Son diferentes" ) <<endl;

    cout << "Comparando arr1 y arr3\n";
    cout << (compararArreglos(arr1,arr3,N) ? "Son iguales"  : "Son diferentes" ) <<endl;

    return 0;
}