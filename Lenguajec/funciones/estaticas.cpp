#include <iostream>
using namespace std;
float promedio(float n)
{
    static float suma = 0;
    suma = suma + n;
    return suma;
}
main()
{
    int i, n;
    float resulatado;
    cout << "Cuantas veces quiere llamar a lafuncion promedio";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        resulatado = promedio(i);
    }
    cout<<"Resultado: "<<resulatado; 
}