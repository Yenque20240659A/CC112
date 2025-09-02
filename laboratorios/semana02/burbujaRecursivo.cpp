#include <iostream>
using namespace std;

void burbujaRecursivo(int arr[], int n) {
    //caso base:
    if(n == 1)
        return;

    //caso recursivo:
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    burbujaRecursivo(arr,n-1);
}

void imprimirArreglo(int arr[], int n) {
     for (int i = 0; i < n; ++i) {
         cout << arr[i] << " ";
     }
     cout << endl;
}

int main(){

    int A[] = {5, 1, 8, 0, -1};

    cout << "Arreglo original:" <<endl;
    imprimirArreglo(A,5);

    cout << "Arreglo ordenado en forma creciente:" <<endl;
    burbujaRecursivo(A,5);
    imprimirArreglo(A,5);


    return 0;
}