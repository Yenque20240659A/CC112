#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // cout << "--------- Dirección de una variable -----\n";

    // int x = 12;

    // cout << "El valor de x es: " << x <<endl;
    // cout << "La dirección de x es: " << &x <<endl;


    // cout << "------Declarando punteros --\n";
    // char ch = 'A';
    // int * ptr = nullptr;  // ptr es un puntero a int
    // double * d; //b es un puntero a double
    // char * c = &ch;  // c es un puntero a char

    // cout << "La dirección de A es: " << (void*)c <<endl;


    // cout << "------Puntero genérico void* --\n";
    // // void *  PUNTERO  GENÉRICO
    // cout << "La dirección donde esta A es: " << (void*)c <<endl;
    
    // cout << "\n ----operador de referencia (&) y desreferencia (*)\n";

    // int valor = 27;
    // int *ptr1 = &valor;

    // cout << "La direccion de valor es: " << &valor <<endl;
    // cout << "EL puntero ptr1 apunta a: " << ptr1 <<endl;
    // cout << "Valor al que apunta ptr1 es: " << *ptr1 <<endl;


    // cout << "\n Puntero doble-----\n";
    // int v1 = 21;
    // int *p2 = &v1;
    // int **pp2 = &p2; // <>&&v1;

    // cout << "El valor de v1 es: " << **pp2 << endl;
    // **pp2 = 30;
    // cout << "El nuevo valor de v1 es: " << v1 <<endl;



    const char * cad = "Hola mundo";

    cout << cad <<endl;

    int n = strlen(cad);

    for (int i = 0; i < n; ++i) {
        cout << "La direccion de " << cad[i] << " es: " << (void*)&cad[i] << endl; // ver los tipos ???
    }


    // cout << "\n--------Nombre del arreglo como un puntero \n";

    // int arr[] = {1,2,3,4,5};

    // cout <<"El valor de arr es: " << arr <<endl;
    // cout << "LA direccion de  arr[0] es: " << &arr[0] <<endl;
    // return 0;
}