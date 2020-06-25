#include "iostream"
#include "stdlib.h"

using namespace std;

int main(){
    int tamano = 0, indice = 0;
    cout<< "tamano de arreglo: ";
    cin>> tamano;


int numero[tamano];
    for(indice=1;indice <= tamano;indice++){
        cout<<"ingresa valor: ";
        cin>> numero[indice];

    }

return 0;
}
