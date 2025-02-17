#include<iostream>
using namespace std;
void reemplazar(string &cadena){
    string cadena2, cadena3;
    int pos,nencontrado=0;
    char respuesta;
    cout << "Ingrese cadena objetivo: ";
    getline(cin, cadena2);
    cout << "Ingrese cadena para reemplazar: ";
    getline(cin, cadena3);
    pos = cadena.find(cadena2);
    while (pos != string::npos) {
        nencontrado++;
        cout<<"Lo buscado esta en la posicion "<<nencontrado<<"  Desea Reemplazarlo?<<s/n: ";
        respuesta = cin.get();
        cin.ignore();  
        if(respuesta == 's' || respuesta == 'S'){
            cadena.replace(pos, cadena2.size(), cadena3);      
        }
        pos = cadena.find(cadena2, pos + cadena3.size());
    }  

}
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
int main(){
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin, cadena);
    //cambiarString(cadena);
    reemplazar(cadena);
    cout<<"La cadena es: "<<cadena<<endl;
}