#include <iostream>

using namespace std;

int main()
{
    char nombre[30];
    int horas,turno,bono,pn,pe;
    double ihss,tp,hn,he,pb;

    cout << "Ingrese el nombre del Empleado....>";
    cin.getline(nombre,30);

    cout << "Ingresar el turno 1,2,3..>";
     cin>>turno;

     cout << "Ingresar las horas..>";
     cin>>horas;

     if ((horas>=40))
    {
        hn= 40;
        he=horas-40;
    }

    else
      {
             hn=horas;
             he=0;
      }

     if((turno==1))
    {
         pn=100;
         pe=130;

    }

        else if((turno==2))
      {
             pn=135;
             pe=140;

    }

    else if((turno==3))
      {
             pn=140;
             pe=150;

    }

 else
 {
             pn=0;
             pe=0;

    }

pn=hn * pn;
pe=he * pe;

pb = pn+pe;


 if ((turno == 1) and (horas > 40))
    {
        bono = 300;
    }

else
{
    bono = 100;
}
   if (pb>7000)
    {
        ihss= 245;
    }
    else
    {
        ihss=0.035 * pb;
    }

    tp = pb + bono-ihss;

    cout << "pago por hora normal...."<<pn<<"\n";
    cout << "Pago bruto..."<<pb<<"\n";
    cout << "Seguro Social..."<<ihss<<"\n";
    cout << "Pago bono obtenido..."<<bono<<"\n";
    cout << "Total a pagar..."<<tp<<"\n";


    return 0;
}
