/*
01. Paso de punteros como parámetros de una función
Objetivo: Comprender cómo usar punteros para modificar variables dentro de funciones.

Ejercicio:
Escribe una función void intercambiar(int *a, int *b)que intercambia los valores de dos variables.
En main, pide dos enteros al usuario, llama a la función e imprime los valores antes y después del intercambio.
*/
#include<iostream>
using namespace std;

void intercambiar(int *a, int *b);

int main(){

    int a, b;
    cout<<"ingrese el primer valor: "; cin>>a;
    cout<<"ingrese el segundo valor: "; cin>>b;
    int *ptrA=&a, *ptrB=&b; 
    cout<<"Antes:  Valor a: "<<a<<";    Valor b: "<<b;      //valores antes
    cout<<"\nintercambiar(a, b)"<<endl;
    intercambiar(ptrA,ptrB);                //intercambio de valores por punteros
    cout<<"Despues:  Valor a: "<<a<<";    Valor b: "<<b<<endl;  //valores despues

    return 0;
}

void intercambiar(int *a, int *b){      //recibimos punteros como parametros
    int temp=*a;        //copiamos el valor de "a" en "temp" al desreferenciar
    *a= *b;         //copiamos el valor de "b" en "a" al desreferenciar
    *b=temp;        //copiamos el valor de "temp" en "b" al desreferenciar
}