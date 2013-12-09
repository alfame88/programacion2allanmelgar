#include <iostream>

using namespace std;
int main()

{
    int numero;

    cout << "Ingrese numero....>";
    cin >> numero;

    if(numero>0)
    {
         cout << "EL NUMERO ES POSITIVO" << "\n";

    }


     else if(numero<0)
      {
             cout << "EL NUMERO ES NEGATIVO" << "\n";

    }
    else
 {
             cout << "EL NUMERO ES CERO" << "\n";

    }



    return 0;
}
