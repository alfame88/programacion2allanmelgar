#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero,contador,cpar,cimpar,nveces;
    cpar=0; cimpar=0; contador=0;
    cout<< "Cuantos numeros desea ingresar?";
    cin>>nveces;


    while(contador<nveces)
    {

    cout<< "Ingresar numero";
    cin>>numero;

    if(numero % 2==0)
    {
        cout<<"El numero es par"<<"\n";
        cpar++;
    }
    else
    {
         cout<<"El numero es impar"<<"\n";
         cimpar++;
    }
      contador ++;
    }

    cout<<" numeros de los pares es"<<cpar<<"\n";
    cout<<" numero de impares es"<<cimpar<<"\n";

    return 0;
}
