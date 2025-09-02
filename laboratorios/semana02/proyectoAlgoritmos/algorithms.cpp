#include <iostream>
using namespace std;

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
    
