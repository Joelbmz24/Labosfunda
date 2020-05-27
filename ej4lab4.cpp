#include "iostream"
#include "string"

using namespace std;
int main(){
    string pal;

    cout<<"ingrese una palabra: ";
     getline(cin,pal);
    
     if(pal.length()<10 && pal.length() %2== 0){
         cout<<"tiene menos de 10 caracteres y es par "<<endl;
     }else if(pal.length()>10 && pal.length()%2 !=0){
         cout<<"tiene mas de 10 caracteres y es impar"<<endl;
     }else if(pal.length()==10){
         cout<<"es igual a 10 y el numero es par"<<endl;       
     }else if(pal.length()<10 && pal.length()%2 !=0){
         cout<<"tiene mas de 10 caracteres y es impar"<<endl;
     }else if(pal.length()>10 && pal.length()%2==0){
         cout<<"tiene mas de 10 caracteres y es par"<<endl;
     }
return 0;
}


