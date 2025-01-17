#include <iostream>
using namespace std;
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
            while (contador < cantNumeros)
            {
                contVerificador = 1;
                suma = 0;
                while (contVerificador < nVerificador)
                {
                    if (nVerificador % contVerificador == 0)
                    {
                        suma = suma + contVerificador;
                    }
                    contVerificador++;
                }
                if (suma > nVerificador)
                {
                    cout << "Abundante: " << nVerificador << endl;
                    contador++;
                }
                nVerificador++;
            }
            break;
        case 2:
            while (contador < cantNumeros)
            {
                contVerificador = 1;
                suma = 0;
                while (contVerificador < nVerificador)
                {
                    if (nVerificador % contVerificador == 0)
                    {
                        suma = suma + contVerificador;
                    }
                    contVerificador++;
                }
                if (suma < nVerificador)
                {
                    cout << "Deficientes: " << nVerificador << endl;
                    contador++;
                }
                nVerificador++;
            }
            break;
        case 3:
            while (contador < cantNumeros)
            {
                contVerificador = 1;
                suma = 0;
                sumaAm = 0;
                while (contVerificador < nVerificador)
                {
                    if (nVerificador % contVerificador == 0)
                    {
                        suma = suma + contVerificador;
                    }
                    contVerificador++;
                }
                contVerificador = 1;
                while (contVerificador < suma)
                {
                    if (suma % contVerificador == 0)
                    {
                        sumaAm = sumaAm + contVerificador;
                    }
                    contVerificador++;
                }
                if (sumaAm == nVerificador && suma != nVerificador)
                {
                    cout << "Amigos: " << nVerificador << " y " << suma << endl;
                    contador++;
                }
                nVerificador++;
            }
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
