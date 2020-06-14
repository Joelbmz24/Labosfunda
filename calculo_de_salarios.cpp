#include <iostream> //llamamos la libreria de entrada y salida

using namespace std;
//funciones
double saltotal(int x,int z); 
double salreal(int x,int z);
void calempleados();

int main(){//funcion principal
  int eleccion,hn,hx,empleados;//declaracion de variables
  double fun1,fun2;
  while (eleccion != 2)
  {//menu de ocion multiple
    cout<<"1)Ingrese numero de empleados: ";
    cout<<"2)Salir"<<endl;
    cin>>eleccion;
      switch (eleccion)//aplicacion de funcion switch
      {
        case 1: 
        calempleados();
          break;
        default:
          break;
      }
  }
  
  return 0;
}

double saltotal(int x,int z){
  double hn,hora,hx,hora1,total;
  hn = x;
  hx = z;
 
  hora = hn*1.75;
  hora1 = hx * 2.50;
  
  total=hora+hora1;
  return total;
}

double salreal(int x,int z)
{
  int saltota,hn,hx,suma,ss,afp,isr,total;
      
      hn=x;
      hx=z;
      saltota = saltotal(hn,hx);
//funcion de if con condicionales para determinar los impuestos
      if(saltota>500){
        ss=saltota*0.04;
        afp=saltota*0.0625;
        isr=saltota*0.1;
        suma=ss+afp+isr;
        total=saltota-suma;
      }
      else
      {
        ss=saltota*0.04;
        afp=saltota*0.0625;
        suma=ss+afp;
        total=saltota-suma;
      }
  return total;
}
void calempleados(){//en esta parte se solicitan los datos para determinar los salarios
  int empleado,normal,extra,nombre;
  double fun1,fun2;
  cout<<"cantidad de empleados: "<<">>";
  cin>>empleado;
  for(int i=1;i<=empleado;i++){
    cout<<"Empleado "<<i<<" horas de trabajo normales: ";
    cin>>normal;
    cout<<"Empleado "<<i<<" horas de trabajo extras: ";
    cin>>extra;
    fun1 = saltotal(normal,extra);
    fun2 = salreal(normal,extra);
    cout<<"empleado: "<<i<<" su salario total es: $"<<fun1<<endl;
    cout<<"salario real: $"<<fun2<<endl;//ae entregan los salarios en base a los valores ingresados
  }
}