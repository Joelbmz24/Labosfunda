#include <iostream>

using namespace std;

int contarocurrencias (int arreglo[],int n, int digito){
    int NumeroOcurrencias = 0;
    for (int i = 0; i < n; i ++){
        if(arreglo[i] == digito){
            NumeroOcurrencias ++;
        }
    }
    return NumeroOcurrencias;
}

int main(){
    int arreglo[12] = {1,2,3,4,5,6,8,7,6,3,1,2};
    int n;
    cout << " Ingrese el digito a comparar: " ;
    cin >> n;

    cout << " El numero de ocurrencias del numero " << n << " en el arreglo es " << contarocurrencias(arreglo,12,n) << endl;
}