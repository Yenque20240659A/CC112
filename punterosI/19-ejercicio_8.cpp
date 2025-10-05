/*
Copia de cadena (sin strcpy)
Escribe una función que copie el contenido de una cadena a otra usando punteros.

// Prototipo sugerido
void copiarCadena(char* destino, const char* origen);
*/
#include<iostream>
using namespace std;

void copiarCadena(char *destino, const char *origen);

int main(){

    const int tam_max=100;
    const char cadena1[]="caracteres de $, 3, (, etc";
    char cadena2[100];

    cout<<"cadena1: "<<cadena1<<endl;
    copiarCadena(cadena2,cadena1);
    cout<<"copiarCadena(cadena2, cadena1)"<<endl;
    cout<<"cadena2: "<<cadena2<<endl;
    return 0;
}

void copiarCadena(char *destino, const char *origen){
    char *posDestino=destino;       //puntero que recorre la cadena "destino"
    while(*origen!='\0'){           //repite hasta que termine la cadena "origen"
        *posDestino= *origen;       //copia la cadena "origen" a la cadena "destino"
        origen++;                   //avanza el recorrido de "origen" y "posDestino"
        posDestino++;
    }
    *posDestino='\0';
}