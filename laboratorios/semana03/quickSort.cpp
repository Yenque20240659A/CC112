#include <iostream>
using namespace std;


//Función parrticion
int particion(int arr[], int inicio, int fin) {
    int pivote = arr[fin];

    int i = inicio - 1; 
    //organiza los elmentos menores a la izquierda del pivote
    // y los mayores a la derecha

    for (int j = inicio; j < fin; ++j) {
        if(arr[j] <= pivote) {
            i++;
            swap(arr[i+1], arr[fin]);
        }
    }

    //....continuar
}

// quickSort
void quickSort(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int indicePivote = particion(arr, inicio, fin);

        quickSort(arr, inicio, indicePivote - 1); //ordenar el subarreglo izquierdo

        quickSort(arr, indicePivote + 1, fin);

    }
}

int main(){

    return 0;
}