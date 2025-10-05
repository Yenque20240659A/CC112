/*
3. Contar ocurrencias de un carácter
Crea una función que cuente cuántas veces aparece un carácter dado en una cadena usando punteros.

// Prototipo sugerido
int contarCaracter(const char* str, char objetivo);
*/
#include<iostream>
#include<cstring>
using namespace std;

int contarCaracter(const char *cadena, char objetivo);

int main(){

    const char cadena[]="ocurrencias de un caracter";
    char caracter='r';
    cout<<"La cadena: "<<cadena<<endl;
    cout<<"tiene "<<contarCaracter(cadena,caracter)<<" ocurrencias del caracter '"<<caracter<<"'"<<endl;
    return 0;
}

int contarCaracter(const char *cadena, char objetivo){
    const char *recorrerCad=cadena;         //puntero que recorre const char *cadena 
    int contador=0;                     //contador de ocurrencias del caracter

    while(*recorrerCad!='\0'){
        if(*recorrerCad==objetivo){
            contador++;                 //aumenta en 1 por cada ocurrencia de caracter
        }
        recorrerCad++;          //avanzamos con el puntero
    }
    return contador;            //devolvemos el numero de ocurrencias de caracter de la cadena
}