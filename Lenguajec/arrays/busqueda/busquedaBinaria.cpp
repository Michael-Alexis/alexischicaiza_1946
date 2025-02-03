#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenaDatos(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        v[i]=(i+1)*2;
    }
    
}
int ordenarBurbujav3(int v[], int n)
{
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for (int i = 0; i < n && cambio; i++)
    {
        cambio = false;
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}
void verDatos(int v[], int ne)
{
    cout << "Los elemenetos del vector son: " << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << v[i] << "\t";
    }
}
bool isbusquedaBinaria(int v[], int n, int elemento)
{
    int Iabajo = 0, Iarriba = n - 1, Icentro;
    Icentro = (Iarriba + Iabajo) / 2;
    if (v[Icentro == elemento])
    {
        return true;
    }
    else if (v[Icentro] > elemento)
    {
        Iarriba = Icentro;
        Icentro = (Iarriba + Iabajo) / 2;
         return false;
    }else if(v[Icentro] < elemento){
            Iarriba = Icentro;
            Icentro = (Iarriba + Iabajo) / 2;
            return false;
        }
        return false;
}
bool isEncontradov2(int v[], int n, int elemento){
    int i;
    int Iabajo = 0, Iarriba = n - 1, Icentro;
    Icentro = (Iarriba + Iabajo) / 2;
      if (v[Icentro == elemento])
    {
        return true;
    }
    else if (v[Icentro] > elemento)
    {
        Iarriba = Icentro;
        Icentro = (Iarriba + Iabajo) / 2;
        cout<<"";
         return false;
    }else if(v[Icentro] < elemento){
            Iarriba = Icentro;
            Icentro = (Iarriba + Iabajo) / 2;
            return false;
        }
}
    
main()
{
    int ne, dato;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenaDatos(vec, ne);
    ordenarBurbujav3(vec, ne);
    verDatos(vec, ne);
    cout << "Ingresa el datos a buscar :";
    cin >> dato;
    (isbusquedaBinaria(vec,5,dato))?cout<<"El elemento esta en el array":cout<<"El elemento no existe";
}