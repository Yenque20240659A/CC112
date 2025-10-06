/*
02. Arreglo de punteros
Objetivo: Usar arreglos de punteros para manejar múltiples cadenas o estructuras.

Ejercicio:
Declara un arreglo de punteros a char, con 3 frases distintas.
Imprime cada frase y cada carácter usando aritmética de punteros.
Escribe una función que reciba este arreglo y cambie la primera letra de cada palabra a mayúscula.
*/
#include<iostream>
using namespace std;

void imprimirArreglo(const char *frases[]);

int main(){

    const char *frases[]={"muebles","ceramica","agua"};
    imprimirArreglo(frases);
    return 0;
}

void imprimirArreglo(const char *frases[]){
    for(int i=0; i<3; i++){             //realizamos un bucle para despalazarnos entre frases
        while(**(frases+i)!='\0'){      //recorremos todos los caracteres de una frase
            cout<<**(frases+i);         //imprimimos el caracter de la frase frases[i][]
            (*(frases+i))++;        //nos desplazamos al siguiente caracter frases[i][k] --> frases[i][k+1]
        }                           //al desplazar el puntero que apuntaba a frases[i][0] inicialmente
        cout<<endl;
    }
}