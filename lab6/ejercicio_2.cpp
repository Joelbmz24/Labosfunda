#include "iostream"
#include "stdlib.h"

using namespace std;

double media(){
    int tamano = 0, indice = 0;
    double promedio=0, suma= 0;
    cout<< "tamano de arreglo: ";
    cin>> tamano;


int numero[tamano];
    for(indice=1;indice <= tamano;indice++){
        cout<<"ingresa valor: ";
        cin>> numero[indice];
    }
    double s=0.0;
     for(indice=1;indice <= tamano;indice++){
         s+= numero[indice];
          
     }
 return s/ tamano;
}

 int main(){
     cout<<"el promedio es: "<< media() <<endl;
 }


