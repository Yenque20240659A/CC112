/*
 Dado un conjunto de n objetos, cada uno con un peso wi y un valor vi
, y una capacidad
máxima W, escriba una función recursiva que determine el valor máximo que puede
llevarse en una mochila sin exceder dicha capacidad.
Entrada:
Pesos: [2, 3, 4, 5]
Valores: [3, 4, 5, 6]
Capacidad máxima: 5
Salida: El máximo valor que se puede obtener es 7
*/

#include <iostream>
using namespace std;

int mochilaRecursiva(int i, int W, int pesos[], int valores[]) {
    //Caso base
    if(i == 0 || W == 0) {
        return 0;
    }

    // Caso recursivo:
    //Caso 1
    if (pesos[i-1] > W) {
        return mochilaRecursiva(i-1, W, pesos, valores);
    }

    //Caso 2
    //incluir el i-esimo objeto
    int valorExcluir = mochilaRecursiva(i-1, W, pesos, valores);

    //excluir el i-esimo objeto
    int valorIncluir = valores[i-1] + mochilaRecursiva(i-1, W - pesos[i-1], pesos, valores);

    if (valorExcluir > valorIncluir) {
        return valorExcluir;
    } else {
        return valorIncluir;
    }

}

int main(){
    int pesos[]={2, 3, 4, 5};
    int valores[]  = {3, 4, 5, 6};
    int n = 4;
    int W = 5;

    int resultado = mochilaRecursiva(n,W,pesos,valores);

    cout << "El valor máximo posible es: " << resultado << endl;

    return 0;
}