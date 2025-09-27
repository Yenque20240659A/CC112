#include<iostream>
#include<ctime>
#include<chrono>
using namespace std;
using namespace std::chrono;

void imprimir_arreglo(int *arr, int n);
void modificarPorPuntero(int *arr, int n);
void modificarPorCopia(int arr[], int n);

int main(){

    srand(time(NULL));

    int matriz[1000]={0};
    int n=1000;

    for(int i=0; i<1000; i++){
        *(matriz+i)=1+rand()%1000;
    }

    int *p=matriz;
//Hasta ahora el tiempo de ejecucion de cada funcion me muestra en 0 ms
    auto inicio=high_resolution_clock::now();
    modificarPorPuntero(p,n);
    auto fin=high_resolution_clock::now();
    auto duracion=duration_cast<milliseconds>(fin-inicio);
    cout<<"ModificarPorPuntero Tiempo de Ejecucion: "<<duracion.count()<<" ms"<<endl;

    auto inicio1=high_resolution_clock::now();
    modificarPorCopia(matriz,n);
    auto fin1=high_resolution_clock::now();
    auto duracion1=duration_cast<milliseconds>(fin1-inicio1);
    cout<<"ModificarPorCopia Tiempo de Ejecucion: "<<duracion1.count()<<" ms"<<endl;
    
    return 0;
}

void modificarPorPuntero(int *arr, int n){
    for(int i=0; i<n; i++){
        *(arr+i)=1+rand()%1000;
    }
}

void modificarPorCopia(int arr[], int n){
    int copia[1000]={0};
    for(int i=0; i<n; i++){
        copia[i]=arr[i];
    }
    for(int i=0; i<n; i++){
        copia[i]=1+rand()%1000;
    }
}

void imprimir_arreglo(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
}