#include<iostream>
using namespace std;
struct persona
{
    string nombre="Sin nombre";
    int edad=0;
    float estatura=0.0;
}p1,p2;
struct{
    string nombre;
    float nota;
}e1,e2;
void registro(){
    persona p5,p6;
}
int main()
{   
    //typedef  persona  personas;
    //typedef  int  entero;
    persona persona3,persona4;
    persona3.nombre="Carlo Ortiz";
    persona3.edad=28;
    persona3.estatura=1.90;
    cout<<"Nombre de la persona: "<<persona3.nombre<<"\t";
    cout<<"Edad de la persona: "<<persona3.edad<<"\t";
    cout<<"Estatura de la persona: "<<persona3.estatura<<"\t";
    cout<<"Datos persona4: "<<endl;
    cout<<"Nombre: ";
    getline(cin,persona4.nombre);
    cout<<"Edad: ";
    cin>>persona4.edad;
    cout<<"Estatura: ";
    cin>>persona4.estatura;
    cout<<"Datos ingresados"<<"\t";
    cout<<"Nombre "<<persona4.nombre<<"\t";
    cout<<"Edad "<<persona4.edad<<"\t";
    cout<<"Estatura "<<persona4.estatura<<endl;
    return 0;
    cout<<"Datos del estudiante No 1"<<endl;
    cout<<"Nombre: ";
    cin.ignore();
    getline(cin,e1.nombre);
    cout<<"Nota: ";
    cin>>e1.nota;
}


