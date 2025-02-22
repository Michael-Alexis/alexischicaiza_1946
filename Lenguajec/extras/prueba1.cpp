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
    int palabras = 0;
    bool enPalabra = false;
    int longitud = 0;
    
    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] != ' ' && cad[i] != '\t') // No es un espacio ni tabulación
        {
            if (!enPalabra)
            {
                enPalabra = true;
                longitud = 1;
            }
            else
            {
                longitud++;
            }
        }
        else
        {
            if (enPalabra && longitud >= 2) // Solo contar si la "palabra" tiene al menos 2 caracteres
            {
                palabras++;
            }
            enPalabra = false;
        }
    }
    
    if (enPalabra && longitud >= 2)
    {
        palabras++;
    }
    
    return palabras;
}

int main()
{
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras;
    cout << "\nLongitud de la cadena: " << longitudCadena(palabras);
    cout << "\nLa cantidad de palabras es: " << contarPalabras(palabras) << endl;
    return 0;
}