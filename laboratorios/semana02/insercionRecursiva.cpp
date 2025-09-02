#include <iostream>
using namespace std;

void insercionRecursiva(int arr[], int n) {
    //caso base
    if (n == 1)
        return;

    //Caso recursivo
    insercionRecursiva(arr,n-1);

    
        int key = arr[n-1];
        int j = j-2;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    
}

int main(){

    return 0;
}