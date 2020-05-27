#include "iostream"
using namespace std;
int main ()
{
    int a,b;

    cout<<"inserte primer numero: "<<endl;
    cin>>a;
    cout<<"insete segundo numero: "<<endl;
    cin>>b;

    if (a%b==0){
    cout<<"si son divisibles"<<endl;
    }else{
        cout<<"no es divisible"<<endl;
    }
    return 0;

}