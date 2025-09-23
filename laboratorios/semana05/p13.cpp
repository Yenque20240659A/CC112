/*
Contador de caracteres en un char[]
Escribe una función que reciba una cadena de caracteres (char[]) y cuente
cuántas veces aparece un carácter específico. Usa solo punteros
*/


#include <iostream>
using namespace std;

int contarCaracteres(const char *s, char caracter) {
    int contChar = 0;
    while(*s != '\0') {
        if(*s == caracter) {
            contChar++;
        }
        s++;
    }

    return contChar;
}

int main(){

    const char cad[] =  "Fundamentos de programacion cc112 A";// {'F', 'u'. ....};
    char caracter = 'a';

    int resultado = contarCaracteres(cad, caracter);

    cout << "El caracter " << caracter << " se repite:  " << resultado << " veces";


    return 0;
}