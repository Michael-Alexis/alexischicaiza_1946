#include<iostream>
using namespace std;
main(){
    string cadena1={"informatica"};
    const char *auxiliar;
    string cadena2(cadena1);//cadena2=cadena1
    string cadena3(10,'*');
    cout<<cadena3;
    cadena1.push_back('Z');//permite añadir un caracter al final de la cadena
    cout<<cadena1<<endl;
    cadena1.at(0)='I';//pmetodo at accede  UN INDICE DE LA CADENA cade1[0]
    cout<<cadena1<<endl;
    //usando el metodo front y back para cambiar los caracteres de inicio y final
    cadena1.front()='i';
    cadena1.back()='A';
    cout<<cadena1<<endl;
    auxiliar=cadena1.c_str();//convierte un array de tipo string a un char
    cout<<"auxiliar array char: "<<auxiliar<<endl;


}