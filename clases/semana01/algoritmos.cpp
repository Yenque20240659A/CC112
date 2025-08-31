/*
Algoritmos de ordenamiento y búsqueda I
ORDENAMIENTO
- burbuja
- seleccion
- insersion

BÚSQUEDA
- lineal
*/
#include <iostream>
using namespace std;

// TAREA 2: PARTE i
// dividir algoritmos i en tres archivos
// main.cpp
// algorithms.h
// algorithms.cpp

void intercambio(int & a, int & b);
void imprimirArray(int arr[], int n);
void burbuja(int arr[], int n);
void seleccion(int arr[], int n);
void insersion(int arr[], int n);

void busquedaLineal(char arr[], int n, char valor);

// Algoritmos II
void particion();
void mezcla();
void mergeSort();
void quickSort();

void busquedaBinaria();



int main(){

    int arr1[] = {5,1,4,2,8}, n1 = sizeof(arr1)/sizeof(arr1[0]); 

    cout << "Arreglo original: " <<endl;
    imprimirArray(arr1,n1);

    burbuja(arr1,n1);

    cout << "Ordenado mediante burbuja: " <<endl;
    imprimirArray(arr1,n1);

    return 0;
}


// funcion intercambio
void intercambio(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i]<< " ";
    }
    cout << "\n";
}

// burbuja
// IDEA: comparar pares de elementos adyacentes
// si estan en el orden incorrecto, intercambiarlos

void burbuja(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                //intercambio(arr[j], arr[j+1]);
            }
        }
    }
    

}
    

// seleccion
// IDEA: buscar el elemento mínimo en la parte no
// ordenada y colocarlo en su posición final

void seleccion(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}


// insersion
// IDEA: insertar cada elemento en su lugar dentro
// la parte ya ordenada

// Completar

