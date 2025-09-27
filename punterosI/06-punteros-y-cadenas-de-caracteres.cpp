#include<iostream>
using namespace std;

int main(){
    char saludo[]="Hola";
    char *saludo2="Hola";

    for(int i=0; i<4; i++){
        if(i==2){                   //Se modifica ya que saludo[] es una copia modificable del texto
            saludo[2]='j';
        }
        cout<<saludo[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<4; i++){
        //if(i==2){                 No funciona y no compila correctamente
        //  *(saludo2+2)='j';       Saludo2 apunta a una cadena que no es modificable, solo es texto
        //}
        cout<<*(saludo2+i)<<" ";
    }
    cout<<endl;
    return 0;
}