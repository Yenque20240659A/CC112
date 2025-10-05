/*
7. Comparación de cadenas (sin strcmp)
Escribe una función que compare dos cadenas (char*) carácter por carácter utilizando punteros.

Debe devolver:

0 si son iguales

-1 si la primera es menor

1 si la primera es mayor
*/
#include<iostream>
using namespace std;

int compararCadena(const char *cadena1, const char *cadena2);

int main(){

    const char cadena1[]="agya";
    const char cadena2[]="aguass";
    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;
    cout<<"compararCadena(cadena1,cadena2) devuelve : ";
    cout<<compararCadena(cadena1,cadena2)<<endl;
    return 0;
}

int compararCadena(const char *cadena1, const char *cadena2){
    const char *posCad1=cadena1;
    const char *posCad2=cadena2;
    while(*posCad1== *posCad2){
        if(*posCad1=='\0'){
            return 0;
        }
        posCad1++;
        posCad2++;
    }
    if(*posCad1> *posCad2){
        return 1;
    }else if(*posCad1< *posCad2){
        return -1;
     }
}