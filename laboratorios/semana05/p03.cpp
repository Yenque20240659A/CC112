/*
Simulación de referencias múltiples
Crea tres punteros: p1, p2, p3, todos apuntando a una misma variable. Cambia
el valor desde p2 y muestra que el cambio es visible desde p1 y p3. Luego,
apunta p2 a otra variable y analiza los efectos.
*/

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int y = 20;

    int *ptr1 = &x, *ptr2 = &x, *ptr3 = &x;

    *ptr2 = 100;

    cout << "El valor de ptr2 es: " << ptr2 << endl;
    cout << "El valor de x es: " << *ptr1 << endl;
    cout << "El valor de x es: " << *ptr3 << endl;

    ptr2 = &y;

    cout << "El nuevo valor de ptr2 es: " << ptr2 <<endl;



    return 0;
}