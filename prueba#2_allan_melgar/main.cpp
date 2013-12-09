#include <iostream>

using namespace std;

// ingresar 10 numeros al final presentar cuanto numeros fueron divisibles entre 5, el promedio de los
// divisibles entre 5 y el numero mayor de todos los numeros.


int main()

{
    int numero, division5=0, mayor=0, suma=0;
    double promedio;

       for( int i=0; i <10 ; i++){

        cout << "Ingrese el  numero: ";
        cin >> numero;
        if((numero % 5)==0){
            suma+= numero;
            division5++;
        }

         if ( numero > mayor)
         {
            mayor = numero;
     }
    }

        if (division5 > 0)

        {
        promedio = suma / division5;

        } else
        {
            promedio =0;
        }



    cout<< "Los  numeros que son divisibles entre 5: " << division5 << endl;
    cout<< "Promedio de los numeros divisibles: " << promedio << endl;
    cout<< "numero mayor sera: " << mayor <<endl;




    return 0;
}
