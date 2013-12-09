#include <iostream>

using namespace std;

int main()
{
   int turno,horas,pxh;
   char nombre[30];
     double ihss,tp,pb;

    cout << "Ingresar el nombre...";
    cin.getline(nombre,30);

     cout << "Ingresar el turno 1,2,3..>";
     cin>>turno;

     cout << "Ingresar las horas..>";
     cin>>horas;
     if(turno==1)
    {
         pxh=100;

    }
        else if(turno==2)
      {
             pxh=150;

    }

    else if(turno==3)
      {
             pxh=190;

    }
    else
 {
             pxh=0;

    }
}
  pb=horas*pxh;
   if (pb>7000)
    {
        ihss= 245;
    }
    else
    {
        ihss=pb * 0.035 ;
    }
    tp=pb-ihss;
    cout << "pago por hora"<<pxh<<"\n";
    cout << "Pago bruto"<<pb<<"\n";
    cout << "Seguro Social"<<ihss<<"\n";
    cout << "Total a pagar"<<tp<<"\n";

    return 0;
}
