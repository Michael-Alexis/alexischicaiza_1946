#include<iostream>
using namespace std;
int main(){
    string cadena="informatica";
    //Borramos los caracteres de la cadena
    cadena.clear();
    cout<<"La cadena es: "<<cadena<<endl; //no muestra nada
    //volvemos a inicializar con un valor
    cadena="informatica";

    //longitud de la cadena
    cout<<"La cadena"<<cadena<<" tiene "<<cadena.length()<<" caracteres"<<endl;

    //Primer y ultimo caracter
    cout<<"Primer caracter: "<<cadena.front()<<endl;//igual que cadena[0]
    cout<<"Ultimo caracter: "<<cadena.back()<<endl;//igual que cadena[cadena.length()-1]

    //Añadir cadenas
    cadena.append(" moderna");//Es lo mismo que cadena+="moderna";
    cout<<"La cadena es: "<<cadena<<endl;

    //Añadir un caracter
    char car='0';
    cadena.append(1,car);
    cout<<"La cadena es: "<<cadena<<endl;

    //Volvemos a inicializa con un valor
    cadena="informatica";

    //Buscar caracter
    if (cadena.find("i")!=-1)
    {
        cout<<"Posicion del primer caracter i: "<<cadena.find("i")<<endl;
    }cout<<"Posicion del segundo caracter i: "<<cadena.find("i",1)<<endl;

    //Extraer subcadena
    string subcad;
    subcad=cadena.substr(2,3);
    cout<<"La subcadena es: "<<subcad<<endl;
    subcad=cadena.substr(5);
    cout<<"La subcadena es: "<<subcad<<endl;    

    //Remplazar parte de la cadena
    cadena.replace(6,5,"accion");
    cout<<"La cadena es: "<<cadena<<endl;
    return 0;
    
}