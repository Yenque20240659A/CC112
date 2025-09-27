#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *p=arr;
    for(int i=0; i<5; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<"\n";
    cout<<"  "<<*(p+5)<<endl;   //me muestra un valor que no esta en el arreglo: 2293524
    return 0;
}