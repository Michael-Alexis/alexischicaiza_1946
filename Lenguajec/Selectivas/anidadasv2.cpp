#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Ingrese valor 1" << endl;
    cin >> a;
    cout << "Ingrese valor 2" << endl;
    cin >> b;
    cout << "Ingrese valor 3" << endl;
    cin >> c;
    if (a == b && a == c)
    {
        cout << "Todos son iguales" << endl;
    }
    else if (a >= b && a >= c)
    {
        cout << "El número " << a << " es mayor" << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "El numero " << b << " es mayor" << endl;
    }
    else if (c >= a && c >= b)
    {
        cout << "El número " << c << " es mayot" << endl;
    }
}