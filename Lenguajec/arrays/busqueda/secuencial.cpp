#include <iostream>
using namespace std;
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
void llenaDatos(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = (i + 1) * 3;
    }
}
void verElementos(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
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
    int vector[5], dato;
    llenaDatos(vector, 5);
    cout << "Ingresa el datos a buscar :";
    cin >> dato;
    //(isEncontradov1(vector,5,dato))?cout<<"El elemento esta en el array\n":cout<<"El elemento no existe\n";
    (isBusquedab(vector, 5, dato)) ? cout << "El elemento esta en el array\n" : cout << "El elemento no existe\n";
    verElementos(vector, 5);
}
