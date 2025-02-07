#include <iostream>
using namespace std;
void llenarCadena(char cad[], int n = 50)
{
    cout << "Ingresa una cadena de caracteres: ";
    cin.getline(cad, n);
    cin.clear();
}
int longitudCadena(char cad[])
{
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        contador++;
    }
    return contador;
}
int contarPalabras(char cad[])
{
    int palabras = 0 ,ter;
    bool palabra=false;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] == ' ' && (cad[i + 1] != ' ' && (cad[i+1]!= '\0')))
        {
            palabras++;
            palabra=true;
        }
    }

    (palabra)? palabras++: palabras;
   ter=palabras -1;
    if(ter==-1){
        ter++;
    } 
    return ter;
}
main()
{
    char palabras[50];
    int ter;
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras;
    cout << "\nLa cadena ingresada es: " << longitudCadena(palabras);
    cout << "\nLa cantidad de palabras es : " << contarPalabras(palabras);
}