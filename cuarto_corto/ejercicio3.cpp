#include "iostream"
using namespace std;
 
void llenarmatriz(float matriz[][5],int fila);

void promedios(float matriz[][5], int fila);


int main(){
    int alumnos;
    cout<<"se evaluaran las 5 notas con ponderacion de 20 porciento cada uno "<<endl;
    
    cout<<"ingresar numero de alumnos: ";
    cin>> alumnos;
    
    float matriz[alumnos][5];
    llenarmatriz(matriz,alumnos);
    promedios(matriz,alumnos);
    
    return 0;
  }
void llenarmatriz(float matriz[][5],int fila){
  for (int i=0;i<fila;i++){
      cout<<"ingrese notas del estudiante "<<i+1<<":";
      for(int j=0;j<5;j++){
       cin>>matriz[i][j];
      }
   }cout<<endl;
  }
  void promedios(float matriz[][5], int fila){
      float final, prom;
      for(int i=0 ; i< fila; i++){
        prom=-0;
        cout<<"Alumno "<<i+1<<endl;
        for(int j= 0;j<5; j++){
            prom+=((matriz[i][j])*(0.20));

        }
        if (prom<6){
            cout<<"reprobaste con: "<<prom<<endl;
        }
        else{
            cout<<"aprobaste con: " <<prom<<endl;
        }
      }
  }

