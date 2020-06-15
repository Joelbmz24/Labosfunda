#include "iostream"
#include "stdlib.h"  //librerias de interaccion
#include "time.h"

using namespace std;
int numrandom()
{ 
    int numrandom;
     srand(time(NULL));//determinacion de funcion aleatoria
      numrandom = 1 + rand() % (101-1);
       return numrandom; //retorno de la respuesta del numero
}
int main(){ //funcion principal

int numero = numrandom(),posnum;

cout<<"adivine numero entre 1 y 100"<<endl;
cout<<"5 intentos maximo, crtl+5+enter para terminar"<<endl; //solicitud de datos
for(int i=5; i>=1;i--){
    cout<<"ingrese numero: ";
    cin>>posnum;
    if(!cin>> posnum){  //funcion de condicion para el uso de los valores aleatorios
        cout<<"juego terminado "<<endl;
        cout<<"el numero aleatorio era: "<<numero;
        break; //descanso
    }
    if (posnum== numero){
        cout<<"nice, adivinaste el numero!!";
        break;
    }
    else if (posnum > numero &&(i-1) !=0)
    cout<<"tu numero es mayor al numero aleatorio \n intentos restantes: "<<(i-1)<<endl;
    else if (posnum< numero &&(i-1)!=0)
    cout<< "tu numero es menor al numero aleatorio \n intentos restantes: "<<(i-1)<<endl;
    else //conclusion final de condicion
        cout<<"se acabaron los intentos, el numero magico es: "<<numero;
    }
        
 return 0; // retorno cero     
}   
    
