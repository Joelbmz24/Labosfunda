#include "iostream"
#include "stdio.h"
#include "math.h"

using namespace std;

float incerteza(){
    int tamano = 0, indice = 0;
    float promedio=0.0 , suma= 0.0,incertezai=0.0;
    cout<< "tamano de arreglo: ";
    cin>> tamano;


float numero[tamano];
    for(indice=1;indice <= tamano;indice++){
        cout<<"ingresa valor: ";
        cin>> numero[indice];
        }
    float s=0.0;
     for(indice=1;indice <= tamano;indice++){
         s+= numero[indice];
         promedio= s/tamano ;
      incertezai+= pow(numero[indice]-promedio,2);
      suma+= incertezai;
}   
float incertezaf= sqrt(incertezai/tamano-1);
 cout<<"la incerteza es: "<<incertezaf<<endl;

return sqrt(incertezai/tamano-1) ;

}
 int main(){
    incerteza();
    int tamano = 0, indice = 0;
    float promedio=0.0 , suma= 0.0,incertezai=0.0;
    float s=0.0;
     float numero[tamano];
    float incertezaf= sqrt(incertezai/tamano-1);
 }
 

