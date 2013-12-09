#include <iostream>

using namespace std;
// ingresar la base y exponente y determinar la potencia usando ciclo For
int main()
{
  int base, exponente,pot;
        cout<<"ingresar la base...:  ";
        cin>> base;

        cout<<"ingresar el exponente...: ";
        cin>>exponente;

       pot=1;

    for (int i=0; i<exponente; i++)
    {
          pot *= base;

    }

        cout<<"potencia del resultado es...:"<<pot<<"\n";

    return 0;
}

