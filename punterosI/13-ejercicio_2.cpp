#include<iostream>
#include<cstring>
using namespace std;

bool cadenaPalindroma(char const*cadena);

int main(){

    char const cadena[]="reconocer";
    if(cadenaPalindroma(cadena)){
        cout<<"( "<<cadena<<" ) ES una cadena Palindroma"<<endl;
    }else{
        cout<<"( "<<cadena<<" ) NO es una cadena Palindroma"<<endl;
    }
    return 0;
}

bool cadenaPalindroma(char const *cadena){
    char const *inicio=cadena;
    char const *fin=cadena+strlen(cadena)-1;

    while(inicio<fin){
        if(*inicio==' '){
            inicio++; continue;
        }else if(*fin==' '){
            fin--; continue;
        }else if(*inicio!= *fin && *inicio!= *fin+32 && *inicio!= *fin-32){
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}