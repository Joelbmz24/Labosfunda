#include "iostream"
#include "stdio.h"


using namespace std;


    char codigo(char letra ){
        switch(letra)
        {
            case 'm': letra = '0'; break;
            case 'u': letra = '1'; break;
            case 'r': letra = '2'; break;
            case 'c': letra = '3'; break;
            case 'i': letra = '4'; break;
            case 'e': letra = '5'; break;
            case 'l': letra = '6'; break;
            case 'a': letra = '7'; break;
            case 'g': letra = '8'; break;
            case 'o': letra = '9'; break;
        }
        return letra;
    }
    int main(){
        int longi;
        string aray;

        cout<<"ingresar frase: ";
        getline(cin,aray);
        longi = aray.length();

        for (int i=0; i<longi; i++){
            cout<<(codigo(aray[i]));
        }
        return 0;
    }










