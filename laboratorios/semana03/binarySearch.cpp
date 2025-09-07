#include <iostream>
using namespace std;

// Algoritmo de búsqueda binaria
int busquedaBinaria(int arr[], int n, int valor) {
    int inicio = 0;
    int fin = n - 1;

    while(inicio <= fin) {
        int medio = (inicio + fin)/2;
        if( arr[medio] == valor) {
            return medio;
        } else if(arr[medio] > valor) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }

    return -1;
} 

int main(){

    return 0;
}