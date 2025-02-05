#include <iostream>
#include"../../librerias/arrays.h"
using namespace std;
using namespace vectorn;
main()
{
    int ne,elemento;
    cout<<"Numero de elementos: ";
    cin>>ne;
    int vector[ne];
    cout << "Ingresa el datos a buscar :"; 
    cin >> elemento;
    llenarVector(vector,ne);
    ordenarBurbujav3(vector,ne);
    verVector(vector,ne);
    (isBusquedab(vector,ne,elemento)) ? cout << "\nEl elemento esta en el array" : cout << "\nEl elemento no existe";
    verVector(vector,ne);
}
