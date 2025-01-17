#include <iostream>
using namespace std;

main()
{
    bool entrar = true;
    int op, cantNumeros, contador, nVerificador, contVerificador, suma = 0;

    while (entrar)
    {
        cout << "Menu de Opciones" << endl;
        cout << "1. Numeros Abundantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> op;

        if (op >= 1 && op <= 3)
        {
            cout << "Cuantos terminos desea generar: ";
            cin >> cantNumeros;
            contador = 0;
            nVerificador = 2;
        }

        switch (op)
        {
        // Caso 1: Numeros Abundantes
        case 1:
            while (contador < cantNumeros)
            {
                contVerificador = 1;
                suma = 0;

                while (contVerificador < nVerificador)
                {
                    if (nVerificador % contVerificador == 0)
                    {
                        suma += contVerificador;
                    }
                    contVerificador++;
                }

                if (suma > nVerificador) // Condición de abundante
                {
                    cout << "Abundante: " << nVerificador << endl;
                    contador++;
                }
                nVerificador++;
            }
            break;

        // Caso 2: Numeros Deficientes
        case 2:
            while (contador < cantNumeros)
            {
                contVerificador = 1;
                suma = 0;

                while (contVerificador < nVerificador)
                {
                    if (nVerificador % contVerificador == 0)
                    {
                        suma += contVerificador;
                    }
                    contVerificador++;
                }

                if (suma < nVerificador) // Condición de deficiente
                {
                    cout << "Deficiente: " << nVerificador << endl;
                    contador++;
                }
                nVerificador++;
            }
            break;

        // Caso 3: Numeros Amigos
        case 3:
            while (contador < cantNumeros / 2) // Generar pares de amigos
            {
                int sumaA = 0, sumaB = 0;
                int numA = nVerificador;
                int numB;

                // Sumar divisores de numA
                for (int i = 1; i < numA; i++)
                {
                    if (numA % i == 0)
                    {
                        sumaA += i;
                    }
                }

                numB = sumaA; // numB es la suma de los divisores de numA

                // Calcular la suma de divisores de numB
                for (int j = 1; j < numB; j++)
                {
                    if (numB % j == 0)
                    {
                        sumaB += j;
                    }
                }

                // Verificar si son amigos
                if (numA < numB && sumaB == numA)
                {
                    cout << "Amigos: (" << numA << ", " << numB << ")" << endl;
                    contador++;
                }
                nVerificador++;
            }
            break;

        // Caso 4: Salir
        case 4:
            entrar = false;
            break;

        // Caso Default: Opción Inválida
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        system("pause");
        system("cls");
    }
}
