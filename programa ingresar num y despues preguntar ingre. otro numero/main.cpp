#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int numero,suma;
    char resp;

    suma=0;

do
{
    do{
       cout << "Ingresar Numero entre 1 a 100 ...: ";
       cin>> numero;
    } while ((numero<=1) or (numero>=100)); //validad q solamente seran numero de 1 a 100

        _flushall();
do
{
    cout << "Desea continuar? R= " ;
       cin.get(resp);

}
 while ((resp !='S') and (resp !='N')) ;
suma+=numero;

}
 while (resp != 'N') ;
       cout << "Final del programa...: " ;
       cout << "La suma es  ....:: " << suma<< endl;
    return 0;
}

