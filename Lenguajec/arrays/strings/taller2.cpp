#include<iostream>
using namespace std;
int main(){
    string cadena1={"informatica"};
    string cadena4;
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
    //metodo empty para conocer si una cadena esta vacia
    (cadena4.empty())?cout<<"cadena4 esta vacia\n"<<endl:cout<<"cadena4 no esta vacia\n"<<endl;
    //tamaño maximo de caracteres que puede tener una cadena
    cout<<"Tamaño mmaximo: "<<cadena1.max_size()<<endl;
    //tamaño en bytes del objeto string que ocupa actualmente
    cout<<"Capacidad: "<<cadena1.capacity()<<endl;
    //usando el metodo compare para compara cadenas
    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;
    //(cadena1.compare(cadena2)==0)?cout<<"cadena1 y cadena2 son iguales\n":cout<<"cadena1 y cadena2 no son iguales\n";
    cout<<"cad1="<<cadena1<<" cad2="<<cadena2<<endl;   
    cadena1="mola";
    cadena2="cola";
    int comparacion=cadena1.compare(cadena2);
    cout<<"comparacion: "<<comparacion<<endl;
    int encontrado=cadena1.find("ol");
    cout<<"encontrado: "<<encontrado<<endl;
    (cadena1.find("ol")==string::npos)?cout<<"no encontrado\n":cout<<"encontrado\n";
}