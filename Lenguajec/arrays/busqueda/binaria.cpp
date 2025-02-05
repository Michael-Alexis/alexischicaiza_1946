#include <iostream>
#include"../../librerias/arrays.h"
using namespace std;
using namespace vectorn;
bool isEncontradov1(int v[], int n, int elemento)
{
    bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == elemento)
        {
            encontrado = true;
            break;
        }
    }
    return encontrado;
}
bool isEncontradov2(int v[], int n, int elemento)
{
    // bool encontrado=false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == elemento)
        {
            // encontrado=true;
            // break;
            return true;
        }
    }
    return false;
}
bool isBusquedab(int v[], int n, int elemento)
{
    int inf = 0, sup = n - 1, mitad;
    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (v[mitad] == elemento)
        {
            return true;
        }
        else if (elemento < v[mitad])
        {
            sup = mitad - 1;
        }
        else
        {
            inf = mitad + 1;
        }
    }
    return false;
}
main()
{
    int ne,dato;
    cout<<"Numero de elementos: ";
    cin>>ne;
    int vector[ne];
    llenarVector(vector,ne);
    ordenarBurbujav3(vector,ne);
    verVector(vector,ne);
}