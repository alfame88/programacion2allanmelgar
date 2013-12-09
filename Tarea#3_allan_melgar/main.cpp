#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;


int main()
{
    int numero,contador,contadorpar,mayor,menor;
    char resp;

    contador=0;
    numero=0;
    contadorpar=0;
    mayor=0;
    menor=10000000;

    {
        do
        {


            cout << "Ingresar Numero Entre 50-150: ";
            cin>> numero;
            contador++;

        }

               while ((numero>=50) or(numero<=150));

                if ((numero % 2) ==0)
                contadorpar++;




           if (numero > mayor)
                {
                    mayor = numero;
                }

             if  (numero <= menor)
               {
                   menor = numero;
                }


do
{

           cout << "Desea continuar? R= " ;
           resp = getche();
           cout << "\n" ;
           _flushall();
           cout << "\n" ;
}

         while ((resp !='S') and (resp !='N')) ;


    }
    while (resp != 'N') ;
    cout << "Numero par ingresado es ....:: " << contadorpar << endl;
    cout << "El numero mayor es....: " << mayor << endl;
    cout << "El numero menor es....: " << menor << endl;


    return 0;
}
