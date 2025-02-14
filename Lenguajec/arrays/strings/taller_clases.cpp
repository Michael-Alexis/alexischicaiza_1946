#include<iostream>
using namespace std;
void cambiarString(string &nombres){
    string nueva;
    string nueva1;
    cout<<"Ingrese la nueva cadena: ";
    getline(cin, nueva);
    int size=nueva.size();
    cout<<"que desea cambiar de la cadena: ";
    getline(cin, nueva1);
    int size1=nueva1.size();
    int pos=nombres.find(nueva1);
    if(pos !=string::npos){
        nombres.replace(pos,size1,nueva.substr(0, size));
        cout<<"La nueva cadena es: "<<nombres<<endl;
    }else{
        cout<<"No se encontro la cadena a cambiar"<<endl;
    }

}
main(){
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin, cadena);
    cambiarString(cadena);
}