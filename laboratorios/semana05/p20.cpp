/*
 Ordenar con función de comparación personalizada
Escribe una función ordenar(int* arr, int n, bool (*comparar)(int, int)) que
ordene un arreglo según el criterio definido en la función comparar. Por ejemplo,
orden ascendente o descendente
*/

#include <iostream>
using namespace std;

void ordenar(int* arr, int n, bool (*comparar)(int, int))  {
    for(int *i = arr; i <arr + n - 1; i++) {
        for (int *j = arr; j < arr + n - 1 - (i - arr); ++j) {
            if (comparar(*j, *(j+1))) {
                int temp = *j;
                *j = *(j+1);
                *(j+1) = temp;
            }
        }
    }
}

bool compararAsc(int a, int b) {
    return a > b;
}

bool compararDesc(int a, int b) {
    return  a < b;  
}


void imprimirArreglo(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main(){

    int arr1[] = {7,2,9,4,1,5};
    int arr2[] = {7,2,9,4,1,5};

    // ordenamiento creciente
    ordenar(arr1, 6, compararAsc);
    imprimirArreglo(arr1,6);


    //ordenamiento decreciente
    ordenar(arr1, 6, compararDesc);
    imprimirArreglo(arr1,6);


    return 0;
}