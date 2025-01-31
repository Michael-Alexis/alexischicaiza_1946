#include <iostream>
using namespace std;
void comprovacion(char ca[]){
cout<<ca[0];
}

main(){
    int ne;
    char cadena[20];
    cout<<"Ingres  cadena de caracteres: ";
    cin.getline(cadena,20);
comprovacion(cadena);
}