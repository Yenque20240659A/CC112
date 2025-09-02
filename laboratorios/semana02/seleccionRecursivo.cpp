#include <iostream>
using namespace std;

void seleccionRecursiva(int arr[], int inicio, int n) {

    //caso base:
    if (inicio == n-1)
        return;

    //Caso recursivo

    int min_idx = inicio;
    for (int j = inicio + 1; j < n; ++j) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }
    swap(arr[inicio], arr[min_idx]);

    seleccionRecursiva(arr, inicio + 1,  n);  
}

int main(){

    return 0;
}