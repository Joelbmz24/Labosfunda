#include "iostream" 
#include "cmath"

using namespace std;
int main() {
    
    float radio;
     
     cout<<"digitar radio: "; cin>>radio;

     float area = 3.1416 * radio*radio;
     
     
     cout<<"el area del circulo es: "<<area<<endl;
    
     float perimetro = 2 * 3.1416 * radio;
     
     cout<<"el perimetro del circulo es: "<<perimetro<<endl;


 return 0;   
 
}