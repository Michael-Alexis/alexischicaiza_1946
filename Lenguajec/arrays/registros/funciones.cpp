#include<iostream>
using namespace std;
struct persona{
    string nombres;
    int edad;
    float estatura;
};
void ingresarRegistro(persona &per1){
    cout<<"Ingrese el nombre de la persona: ";
    getline(cin,per1.nombres);
    cout<<"Ingrese la edad de la persona: ";
    cin>>per1.edad;
    cout<<"Ingrese la estatura de la persona: ";
    cin>>per1.estatura;

}
void mostrarRegistro(persona per1){
    cout<<"Nombre: "<<per1.nombres<<endl;
    cout<<"Edad: "<<per1.edad<<endl;
    cout<<"Estatura: "<<per1.estatura<<endl;
}
main(){
    persona p1={"",0,0.0};
    ingresarRegistro(p1);
    mostrarRegistro(p1);
}