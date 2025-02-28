
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string nombreFichero;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreFichero;
    ofstream archivoSalida;
    archivoSalida.open(nombreFichero.c_str());
    return 0;
}