#include <iostream>
using namespace std;

/*
3 5 7 4 11 3 20
*/

int busquedaBinariaPar(int arr[], int n, int valor) {
    int indPares = (n+1)/2;
    int inicio = 0; 
    int fin = indPares - 1;
    while(inicio <= fin) {
        int medio = (inicio + fin)/2;
        int medioPar = 2* medio;
        if( arr[medio] == valor) {
            return medio;
        } else if(arr[medio] > valor) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }


}

int busquedaBinariaImpar(int arr[], int n, int valor) {
    int indiImpares = n/2;
}



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