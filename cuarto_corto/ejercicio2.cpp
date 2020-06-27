#include "iostream"
using namespace std;


float estatura [25];
void promaltura(float arreglo[], float *total){
    int i=0;

    for (i=0; i<25; i++){
        *total += arreglo[i];
    }
    *total= *total/25;
}
float estarribaAbajo(float arreglo[], int *sobre, int *bajo, float prom){
    for (int i=0; i<25; i++){
        if (arreglo[i]>prom)
        *sobre+=1;
        else
            *bajo+=1;
    
    }
}
int main (){
    float promedio;
    float estaturax;
    int sobremedia=0;
    int bajomedia = 0;

    cout<< "ingrese la estatura de 25 alumnos: "<<endl;
    for (int i=0;i<25;i++){
        cout<<"ingrrese la estatura de alumno: "<<(i+1)<<":";
        cin>>estaturax;
        estatura[i]=estaturax;
    }
    promaltura(estatura,&promedio);
    cout <<"la media de la estaatura es: "<< promedio<< endl;
    
    estarribaAbajo(estatura, &sobremedia,&bajomedia,promedio);
    cout<<"se tienen "<<sobremedia<<" estaturas arriba de la media "<<endl;
    cout<<" se tienen "<< bajomedia<< " estaturas bajo la media "<< endl;
}






    



    
