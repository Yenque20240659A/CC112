/*
6. Reemplazar caracteres
Implementa una función que reemplace todas las apariciones de un carácter por otro dentro de una cadena, usando punteros.

// Prototipo sugerido
void reemplazar(char* str, char viejo, char nuevo);
*/
#include<iostream>
using namespace std;

void reemplazar(char *cadena, const char viejo, const char nuevo);

int main(){

    char cadena[]="tres tristes tigres comieron trigo en un trigal";
    const char viejo='t';
    const char nuevo='g';
    cout<<"cadena original: "<<cadena<<endl;
    reemplazar(cadena,viejo,nuevo);
    cout<<"cadena con caracter '"<<viejo<<"' reemplazado por '"<<nuevo<<"': "<<cadena<<endl;
    return 0;
}

void reemplazar(char *cadena, const char viejo, const char nuevo){
    char *posCad=cadena;            //puntero que recorre la cadena

    while(*posCad!='\0'){       //recorre toda la cadena
        if(*posCad==viejo){
            *posCad=nuevo;      //si el puntero es igual al caracter viejo,
        }                       //lo remplaza por el nuevo
        posCad++;       //recorre al siguiente caracter
    }
}