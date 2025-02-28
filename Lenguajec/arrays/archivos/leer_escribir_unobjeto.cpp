#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream archivo;
    string frase;

    cout << "Escriba una frase para agregar al archivo: ";
    getline(cin, frase);

    archivo.open("ejemplo.txt", ios::out | ios::app);
    if(archivo.is_open())
    {
        archivo << frase << endl;
        archivo.close();
        cout << "Frase agregada al archivo con exito." << endl;
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }
    archivo.open("ejemplo.txt", ios::in);
    if(archivo.is_open())
    {
        string linea;
        while(getline(archivo, linea))
        {
            cout << "Leido: " << linea << endl;
        } 
        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}
