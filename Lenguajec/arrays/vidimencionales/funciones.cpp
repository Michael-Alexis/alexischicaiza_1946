#include <iostream>
using namespace std;
void llenarTabla(int tabla[][50], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"Introduce el valor de la posicion["<<i<<"]["<<j<<"] :";
            cin >>
                tabla[i][j];
        }
    }
}
void imprimeTabla(int tabla[][50], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << tabla[j][i] << "\t";
        }
        cout << endl;
    }
}
main()
{
    int tabla[50][50], filas, columnas;
    cout << "Introduce el numero de filas :";
    cin >> filas;
    cout << "Introduce el numero de columnas :";
    cin >> columnas;
    llenarTabla(tabla,filas,columnas);
    imprimeTabla(tabla,filas,columnas);
}