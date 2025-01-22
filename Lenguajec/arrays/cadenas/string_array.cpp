#include <iostream>
using namespace std;
void cambiarString(string &nombres)
{
    nombres="Sin nombre"; 
}
void cambiarArray(char apelllido[]){
/*apelllido[0]='A';
apelllido[1]='l';
apelllido[2]='v';
apelllido[3]='a';
apelllido[4]='r';
apelllido[5]='e';
apelllido[6]='s';
apelllido[7]='/0';*/
cout << "Ingrese su nuevo Appelido "<<endl;
cin.getline(apelllido,20);
}
main()
{
    string nombres, apodo;
    string curso[5]={"C++","Java","Phyton","C#","PHP"};
    char apellido[20], apodo1[20];
    cout << "Ingrese su nombre: ";
    getline(cin, nombres);
    cambiarString(nombres);
     cout << "Su nombre kuego de llamar a la funcion: "<<nombres<<endl;
    cout << "Ingrese su apellido: ";
    cin.getline(apellido, 20);
    cout << "Su nombre es: " << nombres << endl;
    cout << "Su apellido es: " << apellido << endl;
    cambiarArray(apellido);
    cout << "Su nuevo apellido es: " << apellido << endl;


    // apellido=apodo; //Error no se puede asignar un string a un char[]
}