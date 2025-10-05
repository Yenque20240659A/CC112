#include<iostream>
#include<cstring>
using namespace std;

void invertirCadena(char *cadena);

int main(){
    char cadena[]="cadenas para invertir texto;,=";
    cout<<"cadena original: "<<cadena<<endl;
    invertirCadena(cadena);
    cout<<"cadena invertida: "<<cadena<<endl;
    return 0;
}

void invertirCadena(char *cadena){
    char *inicio=cadena;
    char *fin=cadena+strlen(cadena)-1;

    while(inicio<fin){
        char temp= *inicio;
        *inicio= *fin;
        *fin=temp;
        inicio++,
        fin--;
    }
}