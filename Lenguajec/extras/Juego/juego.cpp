#include <iostream>
#include "arrays.h"
using namespace std;
using namespace vectorn;
main()
{
    int ne, elemento, in, su, numeroAdivinar,contador=0;    
    bool bandera = true, bandera1 = true;
    while (bandera1)
    {
        cout << "Ingrese limite inferior: ";
        cin >> in;
        cout << "Ingrese superior superior: ";
        cin >> su;
        if (in < su)
        {
            bandera1 = false;
        }
        else{
             cout << "Ingrese un limite superior mayor al inferior" << endl;
        bandera1 = true;
        }
    }

    ne = su - in;
    int vector[ne];

    llenarVector(vector, ne, in, su);
    ordenarBurbujav3(vector, ne);
    verVector(vector, ne);
    numeroAdivinar = vector[rand() % ne];
    cout << "\nUNnumero el numero a adivinar es: " << numeroAdivinar;
    while (bandera && contador < 3)
    {
        cout << "\nIngresa el datos a buscar :";
        cin >> elemento;
        contador++;
        if (elemento < in || elemento > su)
        {
            cout << "Ingrese un numero dentro del rango" << endl;
        }
        
        else if (isBusquedab(vector, ne, elemento, numeroAdivinar))
        {
            cout << "\nNumero encontrado";
            bandera = false;
        }
        else
        {
            bandera = true;
        }
    }
    if (contador == 3)
    {
        cout << "\nPerdiste";
    }
    else
    {
        cout << "\nGanaste";
    }
}