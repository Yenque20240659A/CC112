#include <iostream>
using namespace std;

const int MAX_TAM = 100;
int temp[MAX_TAM];



void burbuja(int arr[], int n);


//Función que mezcla 2  mitades ordenadas
void merge(int arr[], int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = inicio;

    while(i <= medio && j <= fin) {
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= medio) {
        temp[k] = arr[i];
        i++;
        k++;
    }

      while(j <= fin) {
        temp[k] = arr[j];
        j++;
        k++;
    }
}


//MergeSort recursivo
void mergeSort(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = (inicio + fin)/2; //dividir el arrerglo

        mergeSort(arr, inicio,medio); //ordenar la  primera mitad

        mergeSort(arr, medio +1, fin); // ordena la segunda mitad

        merge(arr, inicio, medio, fin);
    }
}

int main(){

    return 0;
}


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
  