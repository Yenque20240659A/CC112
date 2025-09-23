/*
Mostrar la dirección y el contenido de una variable:
Declara un puntero int* p; y haz que apunte a x.
Muestra en pantalla la dirección de memoria de x y el contenido de esa dirección
usando el puntero.
*/

#include <iostream>
using namespace std;

int main(){

    int x = 10;

    int *p = &x;

    cout << "La dirección de x es: " << p <<endl;
    cout << "El contenido de x es: " << *p <<endl; 


    return 0;
}