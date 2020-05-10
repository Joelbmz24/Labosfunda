#include "iostream"
#include "cmath"

using namespace std;

int main(void) {

    float a,b,c,det,partereal,imaginaria,X1,X2;

    cout<<"introducir variable a: ";
    cin>>a;

    cout<<"introducir variable b: ";
    cin>>b;

    cout<<"introducir variable c: ";
    cin>>c;
    
    det = b*b - 4*a*c;
    if (det>0) {
        X1= (-b + sqrt(det))/2*a;
        X2= (-b - sqrt(det))/2*a;
        cout<<"raices reales y diferentes. "<<endl;
        cout<<"X1= "<<X1<<endl;
        cout<<"X2= "<<X2<<endl;
    }
    else if (det==0)  {
        cout<<"raices reales e iguales. "<<endl;

        X1= (-b + sqrt(det)) / (2*a);

        cout<<"X1 = X2 = "<<X1<<endl;

    }  

    if(det<0) {
        partereal= -b/(2*a);
        imaginaria=sqrt(-det)/(2*a);
        cout<< "raices complejas y diferentes. "<<endl;
        cout<< "X1= "<< partereal<< "+"<<imaginaria<<"i"<<endl;
        cout<< "X2= "<< partereal<< "-"<<imaginaria<<"i"<<endl;
        }
        system ("pause");
}

