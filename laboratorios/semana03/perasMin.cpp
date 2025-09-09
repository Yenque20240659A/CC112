/*
Pepe tiene n peras en una canasta. Cada día sigue las siguientes reglas:
Si el número actual de peras es divisible por 2, puede comerse la mitad.
Si el número actual de peras es divisible por 5, puede comerse cuatro quintas partes
de ellas.
En caso contrario, puede comerse exactamente 2 peras

f(n)  = min numero de dias para comer n peras

n = 0; --> f(0) = 0;

n > 0

dia 1
- Si n%2 == 0  ---> come n/2 ---- resta n/2

- Si n%5 ==0  ---> Come 4/5 n ----> resta n/ 5

- come 2 ---------------------------> n - 2

f (n) = 1 +  min{f(n/2) si n%2==0, f(n/5), n%5 == 0, f(n-2)}
*/

#include <iostream>
using namespace std;

int minDias(int n) {
    //Caso base
    if (n == 0)
        return 0;
    
    int numDias = 1 + minDias(n-2);
    
    if (n%2 == 0)
        numDias = min(numDias, 1 +  minDias(n/2));

    if (n % 5 == 0)
        numDias = min(numDias, minDias(n/5));

    return numDias;

    // corregir
}

int main(){

    cout << minDias(2);

    return 0;
}