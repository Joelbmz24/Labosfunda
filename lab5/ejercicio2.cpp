#include "iostream"
#include "conio.h"
#include "stdio.h"
using namespace std;

int segdesp(){
    int horas;
    int minutos;
    int segundos;

    segundos = segundos + 1;
    if(segundos >= 60){
        segundos = 0;
        minutos= minutos + 1;
    }if(minutos>=60){
    minutos = 0;
    horas = horas  + 1;}
    
    else{
        cout<<"hora incorrecta "<<endl;
    }
    return 0;
}

int main(){
    int horas;
    int minutos;
    int segundos;
    cout<<"introducir horas: "<<endl;
    cin>>horas;
    cout<<"introducir minutos: "<<endl;
    cin>>minutos;
    cout<<"introducir segundos: "<<endl;
    cin>>segundos;
    
    segundos = segundos + 1;
    if(segundos >= 60){
        segundos = 0;
        minutos= minutos + 1;
    }if(minutos>=60){
    minutos = 0;
    horas = horas  + 1;}
    
    else{
        cout<<"hora incorrecta "<<endl;
    }

    cout<<"un segundo despues de la hora ingresada es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;

}

  