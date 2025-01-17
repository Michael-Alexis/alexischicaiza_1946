#include <iostream>
using namespace std;
main()
{
    int op;
    bool bandera = true;
    while (bandera)
    {
        do
        {
            cout << "Menu de Opciones" << endl;
            cout << "1. Abundantes" << endl;
            cout << "2. Deficientes" << endl;
            cout << "3. Amigos" << endl;
            cout << "4. Salir" << endl;
            cout << "Escoja una opcion: ";
            cin >> op;
            (op < 1 || op > 4) ? cout << "Opcion no valida\n" : cout << "Opcion correcta\n";
            system("pause");
            system("cls");
        } while (op < 1 || op > 4);
        switch (op)
        {
        case 1:
            cout << "Abundates" << endl;
            break;
        case2:
            cout << "Deficientes" << endl;
            break;
        case 3:
            cout << "Amigos" << endl;
            break;
        case 4:
            cout << "Salio" << endl;
            bandera = false;
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    }
}