#include<iostream>
using namespace std;

void modificarPorPuntero(int* ptr);
void modificarPorReferencia(int& ref);

int main(){
    int entero=12;
    int* ptrEntero=&entero;
    cout<<"Valor original: "<<entero<<endl;
    modificarPorPuntero(ptrEntero);
    cout<<"Valor por puntero: "<<entero<<endl;
    modificarPorReferencia(entero);
    cout<<"Valor por referencia: "<<entero<<endl;
    return 0;
}

void modificarPorPuntero(int* ptr){     //La funcion acepta de parametro a un puntero, que almacena una direccion
    *ptr=43;                            //modificamos el valor en esa direccion al desreferenciar el puntero
}                                       //el puntero puede apuntar a otra variables

void modificarPorReferencia(int& ref){  //La funcion acepta de parametro a una variable, pero crea una referencia
    ref=34;                             //de la variable en la funcion, modificando directamente isn desreferenciar
}                                       //En referencia, solo apunta a una unica variable, sin poder cambiar de objetivo