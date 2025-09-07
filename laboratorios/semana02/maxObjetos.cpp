#include <iostream>
using namespace std;

const int TAM_MAX = 100;

void burbuja(int CODIGO[], int PRECIOS[], int PESO[], int n){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (PRECIOS[j] > PRECIOS[j + 1]) {
                swap(PESO[j], PESO[j + 1]);
                swap(PRECIOS[j], PRECIOS[j + 1]);
                swap(CODIGO[j], CODIGO[j + 1]);
            }
        }
    }
}

int main(){
    int n = 6;
    int CODIGO[TAM_MAX] = { 12, 11, 16, 18, 20, 7};
    int PRECIOS[TAM_MAX] = { 55, 20, 25, 45, 15, 30};
    int PESO[TAM_MAX] = {20, 10, 30, 40, 10, 15 };

    const int PESO_MAX = 50;
    const int DINERO = 100;

    int gasto = 0;
    int pesoTotal = 0;

    burbuja(CODIGO,PRECIOS,PESO,n);

    cout << "Listado de productos en la compra: " <<endl;
    cout << "Código " <<"\t" << "Precio (S/)" << "Peso (kg)" <<endl;
    for (int i = 0; i < n; ++i) {
        if((gasto + PRECIOS[i] <= DINERO) && (pesoTotal + PESO[i] <= PESO_MAX)) {
            cout << CODIGO[i] <<"\t" << PRECIOS[i] << "\t" << PESO[i] << endl;
            gasto  = gasto + PRECIOS[i];
            pesoTotal = pesoTotal + PESO[i]; 
        }
    }

    cout << "Monto no gastado: " << DINERO - gasto <<endl;


    return 0;
}