#include <iostream>
using namespace std;
main()
{
    int n1, n2;
    char operador;
    cout << "Ingrese dato 1";
    cin >> n1;
    cout << "INgrese datos 2";
    cin >> n2;
    cout << "Que operacion va a realizar :B <<+>>,<<->>,<<*>>,<</>>";
    cin >> operador;
    switch (operador)
    {
    case '+':
        cout << "La suma de " << n1 << "con" << n2 << " = " << (n1 + n2) << endl;
        break;
    case '-':
        cout << "La resta de " << n1 << "con" << n2 << " = " << (n1 - n2) << endl;
        break;
    case '*':
        cout << "La multiplicacion de " << n1 << "con" << n2 << " = " << (n1 * n2) << endl;
        break;
    case '/':
        (n2 == 0) ? cout << "No exite division por cero" : cout << "La divicion de " << n1 << "con" << n2 << " = " << (n1 / n2) << endl;
        break;
    default:
        cout << "Operador no valido";
        break;
    }
}                        