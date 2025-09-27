#include<iostream>
using namespace std;

int main(){
    int entero=13;
    float flotante=3.14;
    char letra='c';
    cout<<"valor de entero: "<<entero<<"   ; direccion de memoria de entero: "<<&entero<<endl;
    cout<<"valor de flotante: "<<flotante<<" ; direccion de memoria de flotante: "<<&flotante<<endl;
    cout<<"valor de letra: "<<letra<<"    ; direccion de memoria de letra: "<<&letra<<endl;
    return 0;
}