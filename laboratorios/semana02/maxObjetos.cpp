#include <iostream>
using namespace std;

const int TAM_MAX = 100;

void burbuja(int CODIGO[], int PRECIOS[], int PESO[], int n){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (PESO[j] > PESO[j + 1]) {
                swap(PESO[j], PESO[j + 1]);
                swap(PRECIOS[j], PRECIOS[j + 1]);
                swap(CODIGO[j], CODIGO[j + 1]);
            }
        }
    }
}

int main(){

    int CODIGO[TAM_MAX] = { 12, 11, 16, 18, 20, 7};
    int PRECIOS[TAM_MAX] = { 55, 20, 25, 45, 15, 30};
    int PESO[TAM_MAX] = {20, 10, 30, 40, 10, 15 };

    

    return 0;
}