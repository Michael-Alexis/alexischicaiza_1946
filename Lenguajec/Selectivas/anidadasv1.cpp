#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cout << "ingrese valor 1 :";
    cin >> a;
    cout << "ingrese valor 2 :";
    cin >> b;
    cout << "ingrese valor 3 :";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "El mayor es :" << a << endl;
        }                                         
        else
        {
            cout << "El mayor es :" << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "El mayo es :" << b << endl;
        }
        else
        {
            if (c > a)
            {
                cout << "El mayo es :" << c << endl;
            }
            else
            {
                cout << "Son iguales" << endl;
            }
        }
    }
}