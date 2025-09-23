#include <iostream>
using namespace std;


void imprimir(int** m, int filas, int columnas);

int main() {

    int b[] = {1,2,3};

    cout <<"El valor de b[1] es: "<< b[1] << endl;
    cout <<"El valor de 1[b] es: " <<  1[b] << endl;

    int a[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8},{9, 10, 11, 12} };

    // Mostrar dirección de a, a[0], a + 1
    cout << "Direccion de a        : " << a << endl;
    cout << "Direccion de a[0]     : " << a[0] << endl;
    cout << "Direccion de a + 1    : " << (a + 1) << endl;
    cout << "Direccion de a[1]     : " << a[1] << endl;

    // Restar dos punteros
    cout << "\n(a + 1) - a = " << (a+1) - a << " (filas de distancia)" << endl;

    return 0;


    //void f(int **a) { ... } // Válido sólo para matrices creadas como ​arreglos de punteros
                      
    int fila0[4] = {1, 2, 3, 4};
    int fila1[4] = {5, 6, 7, 8};
    int fila2[4] = {9, 10, 11, 12};

    int* matriz[3] = { fila0, fila1, fila2 };  // arreglo de punteros a int

    // matriz[1] es un puntero a int  , tipo int* <--- int*

}

void imprimir(int** m, int filas, int columnas) {
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j)
            cout << m[i][j] << " ";
}
