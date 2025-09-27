#include<iostream>
using namespace std;

void doble_valor(int *valor);

int main(){
    int variable;
    cout<<"Escriba un entero: ";
    cin>>variable;
    doble_valor(&variable);
    cout<<"El valor del entero modificado es: "<<variable<<endl;

    return 0;
}

void doble_valor(int *valor){
    *valor = (*valor)*2;
}