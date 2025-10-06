/*
9. Comprimir caracteres consecutivos (tipo RLE)
Crea una función que comprima una cadena repitiendo los caracteres seguidos junto a su cantidad.

Ejemplo: "aaabbccccd" → "a3b2c4d1"

Solo usa punteros (ni índices ni librerías de manipulación de strings).
*/
#include<iostream>
using namespace std;

void comprimirConsecutivos(char *destino, const char *origen);

int main(){

    const int tam_max=100;
    const char cadena[]="aaabbccccdgghjhaaajassssty";
    char cadenaComprimida[100];
    cout<<"cadena: "<<cadena<<endl;
    comprimirConsecutivos(cadenaComprimida,cadena);
    cout<<"comprimirConsecutivos(cadenaComprimida,cadena)"<<endl;
    cout<<"cadena comprimida: "<<cadenaComprimida<<endl;
    return 0;
}

void comprimirConsecutivos(char *destino, const char *origen){
    char *posDestino=destino;       //creamos un puntero que recorra "destino"
    char letra= *origen;            //creamos una variable char con el primer caracter

    while(*origen!='\0'){
        int contador=0;         //inicializamos el contador de caracteres en 0 (reinicio)
        *posDestino=letra;      //copiamos el contenido de "letra" a "destino"
        posDestino++;           //avanzamos un espacio en "destino", para anotar "contador"

        while(*origen==letra){      //mientras el contenido de "origen" sea igual
            contador++;             //a "letra", avanzamos en "origen" y el contador
            origen++;               //aumenta en 1
        }

        *posDestino=contador+'0';   //cuando "origen" cambia de caracter, copiamos contador a "destino"
        posDestino++;               //avanzamos un espacio en "destino", para el siguiente caracter
        letra= *origen;         //actualizamos letra con el nuevo caracter de "origen"
    }
    *posDestino='\0';       //terminamos la cadena "destino"
}