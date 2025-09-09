#include <iostream>
using namespace std;

const int MAX_TAM = 100;
int tempNotas[MAX_TAM];
string tempNombres[MAX_TAM];



void imprimirArreglo(int notas[], int n);
void imprimirResultado(int notas[], string nombres[], int n);
void merge(int notas[], string nombres[], int inicio, int medio, int fin);
void mergeSort(int arr[], string nombres[], int inicio, int fin);


int main(){
    int n = 5;
    int notas[MAX_TAM] = {8, 12, 3, 5, 15};
    string nombres[MAX_TAM] = {"Ana", "Luis", "Juan", "Pedro", "Sofia"};


    cout << "Arreglo de notas  original: \n";
    imprimirArreglo(notas, n);

    cout << "Arreglo de notas ordenado con mergeSort: \n";
    mergeSort(notas, nombres, 0, n-1);
    imprimirArreglo(notas, n);


    imprimirResultado(notas, nombres, n);




    return 0;
}


//Función que mezcla 2  mitades ordenadas
void merge(int notas[], string nombres[],  int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = inicio;

    while(i <= medio && j <= fin) {
        if(notas[i] <= notas[j]){
            tempNotas[k] = notas[i];
            tempNombres[k] = nombres[i];
            i++;
        } else {
            tempNotas[k] = notas[j];
            tempNombres[k] = nombres[j];
            j++;
        }
        k++;
    }

    while(i <= medio) {
        tempNotas[k] = notas[i];
        tempNombres[k] = nombres[i];
        i++;
        k++;
    }

      while(j <= fin) {
        tempNotas[k] = notas[j];
        tempNombres[k] = nombres[j];
        j++;
        k++;
    }

    for(int i = inicio; i <= fin; ++i) {
        notas[i] = tempNotas[i];
        nombres[i] = tempNombres[i];
    }
}


//MergeSort recursivo
void mergeSort(int notas[], string nombres[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = (inicio + fin)/2; //dividir el arrerglo

        mergeSort(notas, nombres, inicio,medio); //ordenar la  primera mitad

        mergeSort(notas, nombres, medio +1, fin); // ordena la segunda mitad

        merge(notas, nombres, inicio, medio, fin);
    }
}


void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void imprimirResultado(int notas[], string nombres[], int n) {
    cout <<"Resultado final: \n";
    for(int i = 0; i < n; ++i) {
        cout << nombres[i] << "\t" <<  notas[i] << endl;
    }
}
