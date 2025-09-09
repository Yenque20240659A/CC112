/*
Casos base:
i < j   ----> return 0
j == 0  ---> return  1
i == j  ----> return 1

Caso recursivo
return pascalRecursivo() + pascalRecursivo();
*/

#include <iostream>
using namespace std;

int pascalRecursivo(int i, int j) {
    // Casos base
    if (i < j) 
        return 0;
    if (i == j || j == 0)
        return 1;

    // Caso recursivo
    return pascalRecursivo(i-1, j-1) + pascalRecursivo(i-1, j);   
   
}

void imprimirPatron(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << pascalRecursivo(i,j) << " ";
        }
        cout << endl;
    }
}

int main(){

    int n = 6;

    imprimirPatron(n);

    return 0;
}