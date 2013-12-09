#include <iostream>

using namespace std;
// el tiene que ingresar la nota del alumno y el programa debera de presentar
  //la observacion usando la siguiente tabla
int main()
{
int nota;
cout << "Ingrese la nota del alumno....>";
    cin >> nota;

    if(nota<60)
    {
         cout << "Reprobado" << "\n";

    }
        else if(nota<81)
      {
             cout << "Bueno" << "\n";

    }

    else if(nota<91)
      {
             cout << "Muy Bueno " << "\n";

    }
    else
 {
             cout << "Sobresaliente" << "\n";

    }
}
