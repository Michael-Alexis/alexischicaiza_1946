#include <iostream>
using namespace std;
main(){
    int i;
    short valores;
    char letra;
    bool bandera;
    float peso;
    double altura;
    cout <<"Ingrese el valor entero :\t";
    cin >> i;
    cout <<"Ingrese el valor short :\t";
    cin >> valores;
    cout <<"Ingrese el valor char :\t";
    cin.ignore();
    cin >> letra;
    cout <<"Ingrese el valor booleano :\t";
    cin >> bandera;
    cout <<"Ingrese el valor float :\t";
    cin >> peso;
    cout <<"Ingrese el valor double :\t";
    cin >> altura;
    cout <<"valores ingresados \n";
    cout <<"El valor entero es \n"<<i <<endl;
    cout <<"El valor short es \n"<<valores <<endl;
    cout <<"El valor echar es \n"<<letra <<endl;
    cout <<"El valor booleano es \n"<<bandera <<endl;
    cout <<"El valor float es \n"<<peso <<endl;
    cout <<"El valor doble es \n"<<altura <<endl;
    return 0;
}