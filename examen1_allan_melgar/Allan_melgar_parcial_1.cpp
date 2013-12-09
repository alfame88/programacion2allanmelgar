#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int numero,suma,cpar,contador,nummayor,sumadigito,xnumero,xdigito,promedio;
    char resp;

    numero=0;
    suma=0;
    promedio=0;
    cpar=0;
    contador=0;
    nummayor=0;
    sumadigito=0;
    xnumero=0;


    do
      {

      do{

        cout << "Ingresar Numero entre 1 a 200 ...: ";
        cin>> numero;
         _flushall();
    }
     while (!(numero%2==0)or((numero<=1) or (numero>=200))); //validad q solamente seran numero de 1 a 200

      xnumero=numero;
        sumadigito=0;


        while(xnumero>0)
        {
            xdigito=xnumero%10;
            sumadigito+=xdigito;
            xnumero=xnumero/10;
        }
        cout<< "Suma de los numero es: "<<sumadigito<<"\n";

        suma+=numero;
        contador++;

        if ( numero > nummayor)
        {
               nummayor = numero;
        }


do
  {
       cout << "Desea continuar en el programa?..... " ;
       cin.get(resp);
       _flushall();

 }
  while ((resp !='S') and (resp !='N')) ;

}
     while (resp != 'N') ;


   promedio = suma/contador;

    cout << "Promedio de los numeros....>> " << promedio <<"\n";
    cout << "Numero Mayor de los numeros es....>> " << nummayor <<"\n";

    return 0;
}
