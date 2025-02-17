#include <iostream>
using namespace std;
int main()
{
    
     int precio;
     int descuento;
     int precio_final;

cout<<"¿Cuanto es el precio?:";
cin>>precio;
cout<<"¿Cuanto es el descuento?:";
cin>>descuento;

precio_final = precio - precio * descuento / 100;
cout<<"su producto tiene un precio de: "<<precio_final;

    return 0;
}