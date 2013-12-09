#include <iostream>

using namespace std;

int main()
{
    int numero,cifra,suma,mayor,menor,prom,contador,cpar,cimpar;
suma=0;
mayor=0;
menor=9;
prom=0;
contador=0;
cpar=0;
cimpar=0;

 cout << "ingresar el numero entero...:";
cin>>numero;

cout << "numero al reves...:";

while(numero>0)
{
  cifra=numero%10;


  cout << "cifra...." << cifra << ".\n" ;
  numero=numero/10;
  suma+=cifra;


//cifras pares e impares.
if((cifra % 2)==0)
    cpar++;

else

    cimpar++;



while(cifra>mayor)
  mayor=cifra;

if(cifra<menor)
 menor=cifra;

contador++;

//cifras pares e impares.



prom=suma/contador;
}

cout<< ".\n" ;
cout << "suma de las cifras...." << suma << ".\n" ;
cout << "El numero mayor de las cifras es...." << mayor << ".\n" ;
cout << "El numero menor de las cifras es...." << menor << ".\n" ;
cout << "El promedio de los numeros es...." << prom << ".\n" ;
cout << "El numero de cifras pares es...." << cpar << ".\n" ;
cout << "El numero de cifras impares es...." << cimpar<< ".\n" ;

return 0;
}
