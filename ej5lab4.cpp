#include "iostream"
#include "iostream"
using namespace std;
int main(){
    string palabra;
    cout<<"ingrese palabra: ";
    cin>>palabra;
    cout<<"primera letra es: "<<palabra[0]<<endl;
    cout<<"ultima letra es: "<<palabra[palabra.length()-1]<<endl;
    
    if(palabra[0]==palabra.length()-1){
        cout<<"las letras son iguales"<<endl;
    }
    else{
        cout<<"las letras no son iguales"<<endl;
    }

return 0;
}