#include <iostream>

using namespace std;

int main()
{
    char nombre [30];
    int mes,dia,anio;

    cout<<"nombre del mes...>";
    cin.getline(nombre,30);

    Cout<<"Ingrese el dia...>";
    cin >>dia;

     Cout <<"Ingrese el anio...>";
     cin >>anio;

     if ((mes>=1) and (mes<=12))
  {
      cout<<"mes correcto";

  }

  if ((dia>=1) and  (dia<=31))
  {
      cout<<"dia correcto al mes deseado";
  }
  else
      if ((dia>=1) and  (dia<=28))
      {
           cout<<"dia correcto al mes febrero";
      }


   if ((anio>=0)

 {
     cout<<"El año es";

 }
 else
{
    cout<<"mes y dia incorrecto";
}

cout<<"\n";



    return 0;
}
