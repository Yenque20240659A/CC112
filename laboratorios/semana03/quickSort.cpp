#include <iostream>
using namespace std;
const int MAX_TAM = 100;

//Función parrticion
int particion(int arr[], int inicio, int fin) {
    int pivote = arr[fin];

    int i = inicio - 1; 
    //organiza los elmentos menores a la izquierda del pivote
    // y los mayores a la derecha

    for (int j = inicio; j < fin; ++j) {
        if(arr[j] <= pivote) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[fin]);

    return i+1;
}

// quickSort
void quickSort(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int indicePivote = particion(arr, inicio, fin);

        quickSort(arr, inicio, indicePivote - 1); //ordenar el subarreglo izquierdo

        quickSort(arr, indicePivote + 1, fin);

    }
}

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main(){

    int n = 5;
    int arr[MAX_TAM] = {9, 4, 1, 6, 2};

    quickSort(arr, 0, n-1);

    imprimirArreglo(arr, n);



    return 0;
}