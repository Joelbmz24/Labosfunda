#include "iostream"//libreria de entrada y salida
using namespace std;
int main(){
    int a;
    cout<<"ingrese el año: ";// se solicita la entrada de valores
    cin>>a;
    
    if (a % 4 !=0){//la funcion pone de condicion que el residuo de la division es diferente a cero
    cout<<"no es bisiesto"<<endl;
    }
    else if(a % 100 !=0){
        cout<<"es bisiesto"<<endl;
    }
    else if(a % 400 !=0){
        cout<<"no es bisiesto"<<endl;
    }
    else cout<<"el año es bisiesto";//al no complirse lo anterior entonces cae en esta condicion

return 0;//define que retorne cero

}