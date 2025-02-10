#include <iostream>
#include <string.h>
using namespace std;
int comparaCadena(char cad1[], char cad2[])
{
    return strcmp(cad1, cad2);
}
void copiaCadena(char cad1[], char cad2[])
{
    strcpy(cad1, cad2);
}
void añadeCadena(char cad1[], char cad2[])
{
    strcat(cad1, cad2);
}
bool alfabeticoNumerico(char cad1[])
{
    bool alfaNumerico = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalnum(cad1[i]) == false)
        {
            alfaNumerico = false;
            break;
        }
    }
    return alfaNumerico;
}
bool alfabetico(char cad1[]){
    bool alfa = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalpha(cad1[i]) == false)
        {
            alfa = false;
            break;
        }
    }
    return alfa;
}
main()
{
    char cad1[50], cad2[50], cad3[50];
    int comparacion;
    cout << "Ingres la primera cadena: ";
    cin.getline(cad1, 50);
    cout << "Ingres la segunda cadena: ";
    cin.getline(cad2, 50);
    comparacion = comparaCadena(cad1, cad2);
    cout << "comparacion: " << comparacion << endl;
    (comparacion == 0) ? cout << "La s cadenas son iguales" : cout << "Las cadenas son diferentes";
    // copiaCadena(cad1,cad2);
    // cout<<"\nCadena copiada: c1"<<cad1;
    // añadeCadena(cad1,cad2);
    // cout<<"\nCadena añadida: c1"<<cad1;
    (alfabeticoNumerico(cad1)) ? cout << "\n La cadena "<<cad1<<" es alfanumerico" : cout << "\n La caden "<<cad1<<" no es alfanumerico";
    (alfabetico(cad1)) ? cout << "\n La cadena "<<cad1<<" es alfabetico" : cout << "\n La caden "<<cad1<<" no es alfabetico";
}