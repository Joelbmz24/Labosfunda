#include "iostream"

using namespace std;
bool anbis(int ano){
    return ((ano % 4)==0 && (ano % 100)!=0 || ((ano % 400)==0));
}
int daymes(int ano, int mes){
    int dias = 31;
    if(mes==4|| mes==6|| mes==9|| mes==11){
        dias=30; 
    }else if (mes==2){
        if(anbis(ano)){
            dias=29;
        }else{

        }
        dias=28;
    }
    return dias;
    }
int main(){
    int dia;
    int mes;
    int ano;
    char diagonal;
    
    cout<< "ingresar dia, mes y year: "<<endl;
    cin>>dia>>diagonal>>mes>>diagonal>>ano;
    dia++;
    if (dia > daymes(mes,ano)){
        dia=1;
        mes++;
        if(mes>12){
            mes=1;
            ano++;
        }
        else{
            cout<<"error"<<endl;
            }
            return 0;
        }
        cout<<dia<<"/"<<mes<<"/"<<ano<<endl;
    
}
