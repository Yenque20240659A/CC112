#include<iostream>
using namespace std;

void imprimir_arreglo(int *arr, int n);
void modificar_con_puntero(int *a, int n);

int main(){
    int arreglo[]={4,87,23,1,-12};
    int *ptr=arreglo;
    int n=sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"Antes arreglo[]={ ";
    imprimir_arreglo(arreglo,n);
    cout<<"}\n";
    modificar_con_puntero(ptr,n);
    cout<<"Despues arreglo[]={ ";
    imprimir_arreglo(arreglo,n);
    cout<<"}\n";
    return 0;
}

void modificar_con_puntero(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<"Modifique el valor de arreglo["<<i<<"] : ";
        cin>>*(a+i);
    }
}

void imprimir_arreglo(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
}