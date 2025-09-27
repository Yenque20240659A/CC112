#include<iostream>
using namespace std;

int main(){
    int *ptrEntero;
    float *ptrFlotante;
    char *ptrLetra;
    int entero=20;
    float flotante=5.43;
    char letra='w';
    ptrEntero=&entero;
    ptrFlotante=&flotante;
    ptrLetra=&letra;
    cout<<"valor de entero: "<<*ptrEntero<<"     ; direccion de memoria de entero: "<<ptrEntero<<endl;
    cout<<"valor de flotante: "<<*ptrFlotante<<" ; direccion de memoria de flotante: "<<ptrFlotante<<endl;
    cout<<"valor de letra: "<<*ptrLetra<<"       ; direccion de memoria de letra: "<<ptrLetra<<endl;

    return 0;
}