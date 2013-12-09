#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

// ingresar el nombre del alumno luego debemos de pedir las tres notas parciales usando un ciclo, presentar el promedio
//la nota mayor de los tres parciales.
//preguntar si desea continuar al final presentar el nombre del alumno con la mejor nota.

int main()
{
    char nombre[30];
    char resp;
    char nombremayor[30];

    int nota,promedio,notamax,alumnomax,suma;
    int notamayor;

    do
    {
                cout << "Nombre del alumno....: " ;
                 cin.getline(nombre,30);
                 suma=0;
                 notamax=0;
                 alumnomax=0;
                 notamayor=0;
                 for(int i=1;i<=3;i++)

                {
                     cout << "Ingresar el parcial"<<i<< "....." ;
                     cin>> nota;
                     suma+=nota;

                 if (notamax<nota)
              {
                   notamax = nota ;
              }
                 }


                   promedio=suma/3;
                    cout << "Promedio del alumno"<<promedio<< "\n" ;
                    cout << "Nota maxima del alumno es...:"<<notamax<< "\n" ;

                  if (alumnomax < promedio)
                  {
                      alumnomax=promedio;
                      strcpy(nombremayor,nombre);
                  }
                   _flushall();

               cout << "Nota maxima del alumno es...:"<<notamax<< "\n" ;


       do
       {
            cout << "Desea continuar....:";
                     cin.get(resp);
       } while ( (resp != 'N') and (resp != 'S') ) ;

    } while ( (resp != 'N') ) ;

     cout << "Nombre del alumno con la mejor nota...:"<<notamayor<< "\n" ;
      cout << "Con la nota...:"<<alumnomax<< "\n" ;
    return 0;
}
