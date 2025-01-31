#include <iostream>
using namespace std;
void verDatos(int v[], int ne)
{
    cout << "Los elemenetos del vector son: " << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << v[i] << "\t";
    }
}
void llenarVector(int v[], int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        // v[i]=rand()%11;
        cin >> v[i];
    }
}
int insercion(int v[], int n)
{
    int aux, cont=0, j;
    for (int i = 1; i < n; i++)
    {
        aux = v[i];
        j = i - 1;
        while (j >= 0)
        {
            cont++;
            if (aux < v[j])
            {
                v[j + 1] = v[j];
                v[j] = aux;
            }
            j--;
        }
    }
    return cont;
}
main()
{
    int ne, comparaciones;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarVector(vec, ne);
    cout << "vector original: \n";
    verDatos(vec, ne);
    comparaciones = insercion(vec, ne);
    cout << "\nvector ordenado: ";
    verDatos(vec, ne);
    cout << " \n El numero de comparaciones:" << comparaciones;
}