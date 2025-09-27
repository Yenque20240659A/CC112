#include<iostream>
using namespace std;

int main(){
    int valor=25;
    int *ptrValor;
    int **doble_ptrValor;
    ptrValor=&valor;
    doble_ptrValor=&ptrValor;
    cout<<"El numero que almacena valor es: "<<**doble_ptrValor<<endl;

    return 0;
}