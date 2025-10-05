/*
5. Eliminar espacios de una cadena (in-place)
Escribe una función que elimine todos los espacios de una cadena (char*) modificándola in-place.

"e j e r c i c i o" → "ejercicio"
*/
#include<iostream>
using namespace std;

void cadenaSinEspacio(char *cadena);

int main(){

    char cadena[]="e j e r c i c i o";
    cout<<"cadena original: "<<cadena<<endl;
    cadenaSinEspacio(cadena);
    cout<<"cadena sin espacios: "<<cadena<<endl;
    return 0;
}

void cadenaSinEspacio(char *cadena){
    char *recorrerCad=cadena;            //puntero que recorre la cadena
    char *copiarSinEspacio=cadena;          //puntero que copia sobre la misma cadena sin espacio

    while(*recorrerCad!='\0'){          //recorre toda la cadena
        if(*recorrerCad!=' '){
            *copiarSinEspacio= *recorrerCad;    //si es diferente de espacio, se copia
            copiarSinEspacio++;                 //avanza sin copiar espacios
        }
        recorrerCad++;          //avanza al siguiente caracter
    }
    *copiarSinEspacio='\0';      //finaliza la cadena
}