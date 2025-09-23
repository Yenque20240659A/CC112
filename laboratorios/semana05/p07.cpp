/*
Contar elementos pares usando punteros.
Dado un arreglo de enteros, crea una función que reciba un puntero al arreglo y
su tamaño, y que devuelva cuántos números pares contiene
*/

#include <iostream>
using namespace std;

int contarPares(int *a, int n) {
    int contPares = 0;
    for (int i = 0; i < n; ++i) {
        if (*(a + i) % 2 == 0) {
            contPares++;
        }
    }

    return contPares;
} 

int main(){

    int arr[] = {2,6, 7,8,0,2,13,-4};

    cout << "El  arreglo tiene " << contarPares(arr,8) << " pares" <<endl;

    return 0;
}