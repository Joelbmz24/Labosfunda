#include "iostream"
using namespace std;
int main()
{
    int a;
    cout<<"inserte un valor: ";
    cin>>a;

    if (a<0){
        cout<<"es negativo"<<endl;
    }else if (a==0){
        cout<<"es cero"<<endl;
    }else if(a>0){
        cout<<"es positivo"<<endl;
    }else
    {
        cout<<"valor invalido"<<endl;
    }

return 0;

}