#include <iostream>
using namespace std;

int cuadrado(int * ptr) {
    return (*ptr) * (*ptr);
}


int main(){
    int n = 5;
    cout << "El cuadrado de " << n << " es " << cuadrado(&n) <<endl;

    return 0;
}