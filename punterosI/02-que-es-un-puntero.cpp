#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p=&a;
    cout<<"Valor de a: "<<*p<<";  Direccion de a: "<<p<<endl;
    return 0;
}