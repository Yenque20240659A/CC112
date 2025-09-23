/*
Eliminar múltiplos de un número en un arreglo:
Dado un arreglo de enteros, elimina (lógicamente) los múltiplos de un número
dado usando solo punteros. No uses índices. Imprime el resultado sin modificar
la memoria original (solo salta esos elementos)
*/
#include <iostream>
using namespace std;

void eliminaMultiplos(int * arr, int n, int valor) {
    for(int i = 0; i <n; ++i) {
        if(*(arr + i) % valor != 0) {
            cout << *(arr + i) << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr[] = {1,6,8,5,3,4,6,7,8};
    int valor  = 2;
    eliminaMultiplos(arr, 9, valor);

    return 0;
}