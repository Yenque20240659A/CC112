/*
Escriba una función recursiva que calcula el producto
escalar de dos vectores de n elementos recursivamente.
*/
#include <iostream>
using namespace std;


double productoEscalar(double a[], double b[], int n) {
    // caso base
    if (n == 0)
        return 0.0;
    //caso recursivo
    return a[n-1]*b[n-1] + productoEscalar(a,b,n-1);
}


int main(){
    // declaramos 2 arreglos de tamaño fijo

    const int N = 5;
    double a[N] = {2.5,1,2,3,4};
    double b[N] = {2.5,1,2,3,4};

    double resultado = productoEscalar(a,b,N);

    cout << "el producto escalar es: " << resultado <<endl;


    return 0;
}