#include <iostream>

using namespace std;

int main()
{
    int numero,cpositivo,cceros,cnegativos,contador;
    cpositivo=0;cnegativos=0;cceros=0;

  while(contador<5)
{
    cout<< "ingresar un numero";
    cin>> numero;
    if(numero>0)
    {
        cpositivo++;
    }
    else if(numero<0)
{
    cnegativos++;
}
  else
{
    cceros++;
}
   contador;
}
     cout<<"contador positivo"<<cpositivo<<"\n";
     cout<<"contador negativos"<<cnegativos<<"\n";
     cout<<"contador de ceros"<<cceros<<"\n";

    return 0;
}
