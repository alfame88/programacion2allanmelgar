#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{ int numero,divisible5,contador,cpar,nummayor,suma;
  double promedio;
  char resp;

  numero=0;
  divisible5=0;
  cpar=0;
  nummayor=0;
  promedio=0;
  suma=0;
  promedio=0;

   do
   {  do
     {
         cout<<"Ingresar numero: ";
            cin>>numero;
        } while(!(numero%5==0 or numero%2==0));

        if  (nummayor<numero)
        {
            nummayor=numero;
            cpar++;
        }
       {
            suma+= divisible5;
            divisible5++;
       }
      do
         {
           cout << "Desea continuar? R= " ;
           resp = getche();
           cout << "\n" ;
           _flushall();
           cout << "\n" ;

         } while ((resp !='S') and (resp !='N')) ;

      } while (resp != 'N') ;


        if (divisible5 > 0)

        {
        promedio = suma / divisible5;

        } else
        {
            promedio =0;
        }

       if (numero>=100)
        {
            numero+=1;
            suma+=numero;
        }

        promedio=(suma/numero);

    cout<<"Numero Mayor: "<<nummayor<<"\n";
    cout<<"Numeros divisible5: "<<divisible5<<"\n";
    cout<<"Numeros pares: "<<cpar<<"\n";
    cout<<"Promedio mayores a 100: "<<promedio<<"\n";






    return 0;
}
