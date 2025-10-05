/*
4. Buscar subcadena (implementación de strstr)
Escribe una función que busque si una subcadena está contenida dentro de otra cadena, usando únicamente punteros.

"estamos" contiene "amo" → posición 3 "estamos" no contiene "zzz" → -1
*/
#include<iostream>
#include<cstring>
using namespace std;

bool posicionSubcadena(const char *cadena, const char *subcadena, int *posicion);

int main(){

    const char cadena[]="contemplacion de lo lejano";
    const char subcadena[]="leja";
    int posicion=0;
    int *ptr=&posicion;
    if(posicionSubcadena(cadena,subcadena,ptr)){
        cout<<"["<<cadena<<"] contiene ["<<subcadena<<"]";
        cout<<" --> Posicion "<<posicion<<endl;
    }else{
        cout<<"["<<cadena<<"] NO contiene ["<<subcadena<<"]";
        cout<<" --> "<<posicion<<endl;
    }
    
    return 0;
}

bool posicionSubcadena(const char *cadena, const char *subcadena, int *posicion){
    char *dirSubcadena=strstr(cadena,subcadena);
    if(dirSubcadena==nullptr){
        *posicion=-1;
        return false;
    }
    *posicion=dirSubcadena-cadena;
    return true;
}
