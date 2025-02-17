#include <iostream>
using namespace std;
int main()
{
        int numero_1;
        int numero_2;
        string operacion;
        int suma;
        int resta;
        int multiplicacion;
        int division;

cout<<"Deme un numero:";
cin>>numero_1;
cout<<"Deme otro numero:";
cin>>numero_2;

cout<<"Los numeros son " << numero_1 << " y " << numero_2<<endl ;
 suma = numero_1 + numero_2;
cout<<"La suma es "<< suma<<endl;

 resta = numero_1 - numero_2;
cout<<"La resta es "<< resta<<endl;

 multiplicacion = numero_1 * numero_2;
cout<<"La multiplicacion es "<< multiplicacion<<endl;

 division = numero_1 / numero_2;
cout<<"La division es "<< division<<endl;
    return 0;
    
}