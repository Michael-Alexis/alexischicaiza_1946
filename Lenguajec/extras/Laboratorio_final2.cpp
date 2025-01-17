#include <iostream>
using namespace std;
float verificador(int a, int b, int c)
{
    int contVerificador, suma;
    while (a < b)
    {
        contVerificador = 1;
        suma = 0;
        while (contVerificador < c)
        {
            if (c % contVerificador == 0)
            {
                suma = suma + contVerificador;
            }
            contVerificador++;
        }
          if (suma > c)
                {
                    cout << "Abundante: " << c << endl;
                    a++;
                }
                c++;
    }
}
main()
{
    bool entrar = true;
    int op, cantNumeros, contador, nuemro, nVerificador, contVerificador, suma = 0, sumaAm;
    while (entrar)
    {
        cout << "Menu de Opciones" << endl;
        cout << "1.Numeros Abundantes" << endl;
        cout << "2.Numeros Deficientes" << endl;
        cout << "3.Numeros Amigos" << endl;
        cout << "4.Salir" << endl;
        cout << "Ingres una opcion ";
        cin >> op;
        if (op >= 1 && op <= 3)
        {
            cout << "Cuantos terminos desea generar" << endl;
            cin >> cantNumeros;
            contador = 0;
            nVerificador = 2;
        }
        switch (op)
        {
        case 1:
            verificador(contador, cantNumeros, nVerificador);
            break;
        case 2:
            break;
        case 3:
            while (contador < cantNumeros)
                break;
        case 4:
            entrar = false;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        system("pause");
        system("cls");
    }
}
