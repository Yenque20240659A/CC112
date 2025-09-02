/*
Dado un arreglo de enteros y un valor de referencia, encontrar el menor elemento del
arreglo que sea estríctamente mayor que dicho valor.
Ejemplo [12, 7, 19, 25, 14, 9]
Ingrese el elemento de referencia: 14
El elemento mayor más cercano a 14 es: 19
*/

#include <iostream>
using namespace std;

int mayorCercano(int arr[], int n, int valor, bool & flag){ 
    int minInicial = 0;
    flag = false;
    for (int i = 0; i < n; ++i) {
        if(arr[i] > valor) {
            if (!flag || arr[i] < minInicial){
                minInicial = arr[i];
                flag = true;
            }
        } 
        
    }
    return minInicial;
}

int main(){
    int arr[] = {12, 7, 19, 25, 14, 9};
    int valor = 25;

    bool flag;

    int resultado = mayorCercano(arr, 6,valor,flag);

    if (flag) {
        cout << "Valor encontrado: " << resultado <<endl; 
    } else {
        cout << "No existe elementos con dicha propiedad" <<endl;
    }

    return 0;
}