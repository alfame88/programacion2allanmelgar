#include <iostream>

using namespace std;

//La tarea asignada de ingresar un numero ejemplo(123)me dé la suma de esos números que seria 6 como se mira en el programa
//  para poder hacerlo como es, primero ingrese lo que ocupa que es el número, suma, y contador se iguala
//  a cero lo que anteriormente introducimos.
//  Después lo de siempre el cout de ingresar el número a sumar con el Cin que diga número a la vez después viene lo que hace
//  que funcione este programa que es el uso de while y el símbolo (%) que hace la función del while(numero !=0) quiere decir
//  que mientras el número que ingrese será distinto de cero hasta que haga la suma que será la variable.
//  Después en el otro código abajo del while como se ve en el programa quiere decir que el (%) servirá
//  como un módulo que solo sacara los pares y eliminar los residuos y por eso después pongo que lo divida por el numero 10
//  ósea que solo me dividirá los pares y el contador ++ aumentara 1 vez el número ósea que ira sumando un número más dependiendo
//  del tipo de número que ingrese y al final lo que hacemos siempre presentamos el programa con un cout  que será la repuesta.


int main()
{
   int numero, suma, contador;
    suma = 0 ;
    contador=0;
    numero=0;

         cout << "Ingresar el numero a sumar...>" ;
         cin >> numero ;
         cout << "\n" ;


         while(numero !=0)

        {
	    	suma = suma +(numero%10);
	    	numero = numero/10;
            contador++;

            }

    cout << "Suma del los numeros introducidos es...." << suma << ".\n" ;


   return 0;
}
