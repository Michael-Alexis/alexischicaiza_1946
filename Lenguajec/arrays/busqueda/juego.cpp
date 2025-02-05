#include <iostream>
#include"../../librerias/arrays.h"
using namespace std;
using namespace vectorn;
main()
{
    int ne,elemento,in,su, numeroAdivinar;
    bool bandera=true;
    cout<<"Ingrese limite inferior: ";
    cin>>in;
    cout<<"Ingrese superior superior: ";
    cin>>su;
    ne=su-in;
    int vector[ne];
   
    llenarVector(vector,ne,in,su);
    ordenarBurbujav3(vector,ne);
    verVector(vector,ne);
    numeroAdivinar = vector[rand() % ne];
    cout<< "\nNumero a adivinar"<<numeroAdivinar;
    while(bandera){
    cout << "Ingresa el datos a buscar :"; 
    cin >> elemento;
    if(isBusquedab(vector,ne,numeroAdivinar)){
        cout << "\nNumero encontrado";
        bandera=false;
    }else{
        bandera =true;
    }
    }
}
