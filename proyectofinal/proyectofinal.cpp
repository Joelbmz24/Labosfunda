#include "iostream"

using namespace std;

const int longCad =20;          //se define la longitud de la variable
struct costoPorArticulo{          //se delimita la estructura 
char NombreArticulo[longCad + 1];
int cantidadp;
float precio;
float costoPorArticulo;
};

void Datanom(costoPorArticulo articulo[], int cantidadp){        //funcion contiene la interaccion con el usuario y la solicitud de los datos
    cout<<"ingrese datos de los articulos"<<endl;
    for (int i=0; i< cantidadp; i++){                           //el bucle for para la delimitacion de las iteraciones
        cin.ignore(100, '\n');                                 //funciona para ignorar las salto de linea y no sea leido en la siguiente iteracion 
        cout<<"Nombre del articulo: ";
        cin.getline(articulo[i]. NombreArticulo, 21, '\n');    //lee los datos introducidos 
        cout<<"cantidad de articulo: ";
        cin>>articulo[i].cantidadp;
        cout<<"precio unitario: ";
        cin>>articulo[i].precio;
       

    }
}   

    void costodeArt(costoPorArticulo articulo[],int cantidad){          //nueva funcion para la suma de los precios
        for(int i=0; i< cantidad; i++){
            articulo[i].costoPorArticulo=articulo[i].precio*articulo[i].cantidadp;     //la operacion para el resultado de los tatos
        }
}   

void datos(costoPorArticulo articulo[],int cantidadp){       //nueva funcion para mostrar el recibo final
    cout<<"**SU COMPRA FUE**"<<endl;
    for(int i=0; i< cantidadp ; i++){
    cout<<"Nombre del articulo: "<<articulo[i]. NombreArticulo<<endl;
    cout<<"cantidad de articulo: "<<articulo[i].cantidadp<<endl;
     cout<<"precio unitario: "<<articulo[i].precio<<endl;
     cout<<"total: $ "<<articulo[i].costoPorArticulo<<endl;
     }
}
 
float costoTotal(costoPorArticulo articulo[],int cantidadp){           //funcion para el total de la compra realizada
    float total;
    for(int i=0; i < cantidadp; i++){
        total += articulo[i].costoPorArticulo;

    }
    return total;
}
int main(){                                     //en la funcion main se colocan la llamada de los arreglos         
    int cantidadart,total;
    cout<<"cantidad de articulos: ";           
    cin>>cantidadart;                         //solicitud de la cantidad de articulos

    costoPorArticulo Artguardados[cantidadart];

    Datanom(Artguardados,cantidadart);
    costodeArt(Artguardados,cantidadart);
    datos(Artguardados,cantidadart);
    cout<<"total de la compra: "<<costoTotal(Artguardados,cantidadart)<<endl; //se muestra el total de la compra realizada

    return 0;

}