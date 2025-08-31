/*
Escriba una función recursiva que sume los n primeros
números naturales que sean múltiplo de 3.
*/

#include <iostream>
using namespace std;

int sumaMultiplosdeTres(int n) {
    //caso base
    if (n == 0)
        return 0;

    //caso recursivo
    return 3*(n-1) + sumaMultiplosdeTres(n-1);
}

int main(){

    int n = 3; // prueba para n fijo

    cout << "La suma de los primeros " << n << " múltiplos de tres es: " 
    << sumaMultiplosdeTres(n) <<endl;


    return 0;
}