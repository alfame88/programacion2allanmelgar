#include <iostream>

using namespace std;
// ingresar 5 numeros y determinar cuantos son divisibles entre 3;

int main()
{
    int numero,cdiv3,promedio,suma;
    cdiv3=0;
    suma=0;

    for(int i=0;i<5;i++)
    {
         cout << "Ingresar un numero entero";
         cin>> numero;
         if((numero%3)==0)
         {
             cdiv3++;
             suma+=numero;
         }

          if (cdiv3 > 0)
       {
           promedio = suma/cdiv3;
       }
       else
       {
           promedio=0;
       }


    }
    cout << "Contador de divisiblese entre 3 es:"<< cdiv3<<"\n";
    cout << "El promedio de los divisibles entre 3 es:"<< promedio<<"\n";

       return 0;
}
