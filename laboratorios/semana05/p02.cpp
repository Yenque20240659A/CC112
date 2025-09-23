/*
Modificar una variable usando un puntero:
Crea una variable float numero = 3.14.
Crea un puntero float* ptr que apunte a numero.
Modifica el valor de numero usando el puntero y muestra el nuevo valor.
*/

#include <iostream>
using namespace std;

int main(){

    float numero = 3.14;

    float * ptr = &numero;

    //Modificando el valor de numero
    *ptr = 1.71;

    cout << "El valor de numero es: " << numero <<endl;

    return 0;
}