#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"ingrese el año: ";
    cin>>a;
    
    if (a % 4 !=0){
    cout<<"no es bisiesto"<<endl;
    }
    else if(a % 100 !=0){
        cout<<"es bisiesto"<<endl;
    }
    else if(a % 400 !=0){
        cout<<"no es bisiesto"<<endl;
    }
    else cout<<"el año es bisiesto";

return 0;

}