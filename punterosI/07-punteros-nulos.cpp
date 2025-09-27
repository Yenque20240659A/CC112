#include<iostream>
using namespace std;

bool tipo_puntero_nulo(int *ptr);

int main(){
    int *p;
    //*p=5;                                     p no apunta a una direccion valida
    //cout<<"Valor al que apunta p: "<<endl;    por eso falla al asignarle el valor 5
    int *puntero=nullptr;
    if(tipo_puntero_nulo(puntero)){
        cout<<"Es un puntero nullptr"<<endl;
    }else{
        cout<<"No es un puntero nullptr"<<endl;
    }
    return 0;
}

bool tipo_puntero_nulo(int *ptr){
    if(ptr==nullptr){
        return true;
    }else{
        return false;
    }
}