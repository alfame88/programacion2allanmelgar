#include <iostream>

using namespace std;

//La tarea asignada de ingresar un numero ejemplo(123)me d� la suma de esos n�meros que seria 6 como se mira en el programa
//  para poder hacerlo como es, primero ingrese lo que ocupa que es el n�mero, suma, y contador se iguala
//  a cero lo que anteriormente introducimos.
//  Despu�s lo de siempre el cout de ingresar el n�mero a sumar con el Cin que diga n�mero a la vez despu�s viene lo que hace
//  que funcione este programa que es el uso de while y el s�mbolo (%) que hace la funci�n del while(numero !=0) quiere decir
//  que mientras el n�mero que ingrese ser� distinto de cero hasta que haga la suma que ser� la variable.
//  Despu�s en el otro c�digo abajo del while como se ve en el programa quiere decir que el (%) servir�
//  como un m�dulo que solo sacara los pares y eliminar los residuos y por eso despu�s pongo que lo divida por el numero 10
//  �sea que solo me dividir� los pares y el contador ++ aumentara 1 vez el n�mero �sea que ira sumando un n�mero m�s dependiendo
//  del tipo de n�mero que ingrese y al final lo que hacemos siempre presentamos el programa con un cout  que ser� la repuesta.


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
