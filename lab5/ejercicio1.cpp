#include "iostream"

using namespace std;

int mcd(int a,int b){
int res= 1;
for(int i=1;i<=a;i++){
    if((a%i==0) && (b%i==0)) {
        res=i;
    }
  }
  return res;
}  
int main()
{
    int a,b;
    cout<<"introduce el primer numero: "<<endl;
    cin>>a;
    cout<<"introduce el segundo numero: "<<endl;
    cin>>b;
    int res=mcd(a,b);
    cout<<"el maximo comun divisor de "<<a<<" y "<<b<<" es: "<<res<<endl;

    return 0;
}