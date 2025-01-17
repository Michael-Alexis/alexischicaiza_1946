// programa que lee datosy muestra su promedio y el numerod e datos que esta por debajo y ensimA del promedio
#include <iostream>
using namespace std;
main()
{
    int valor, promedio = 0, contador = 0;
    char op = 's';
    bool bandera = true;
    // while (op == 's'|| op == 'S')
    while (bandera)
    {
        {
            cout << "Deseas ingresaara valores <<S>> >> <<N>>: ";
            op = getchar();
            if (op == 's' || op == 'S')
            {
                cout << "Ingresar un valor: ";
                cin >> valor;
                contador++;
                promedio = promedio + valor;
            }
            else
            {
                bandera = false;
            }
            cin.ignore();
        }
        cout << "El promedio de datos ingresados es" << ((float)promedio / contador) << endl;
    }
    #include<iostream>
using namespace std;
main (){
    int numero;
    while (true)
    {
        cout<<"Ingrese un numero:";
        cin>>numero;
        if(numero >=1 && numero <=5);
        break;
    }
    
}